import re
import sys
import subprocess

from path import Path


def remove_all(paths):
    for path in paths:
        path.rmtree() if path.isdir() else path.remove()


def update_vendored():
    update_pkg_resources()
    update_setuptools()


def rewrite_packaging(pkg_files, new_root):
    """
    Rewrite imports in packaging to redirect to vendored copies.
    """
    for file in pkg_files.glob('*.py'):
        text = file.text()
        text = re.sub(r' (pyparsing)', rf' {new_root}.\1', text)
        text = text.replace(
            'from six.moves.urllib import parse',
            'from urllib import parse',
        )
        file.write_text(text)


def rewrite_jaraco_text(pkg_files, new_root):
    """
    Rewrite imports in jaraco.text to redirect to vendored copies.
    """
    for file in pkg_files.glob('*.py'):
        text = file.read_text()
        text = re.sub(r' (jaraco\.)', rf' {new_root}.\1', text)
        text = re.sub(r' (importlib_resources)', rf' {new_root}.\1', text)
        file.write_text(text)


def rewrite_jaraco(pkg_files, new_root):
    """
    Rewrite imports in jaraco.functools to redirect to vendored copies.
    """
    for file in pkg_files.glob('*.py'):
        text = file.read_text()
        text = re.sub(r' (more_itertools)', rf' {new_root}.\1', text)
        file.write_text(text)


def rewrite_importlib_resources(pkg_files, new_root):
    """
    Rewrite imports in importlib_resources to redirect to vendored copies.
    """
    for file in pkg_files.glob('*.py'):
        text = file.read_text().replace('importlib_resources.abc', '.abc')
        text = text.replace('zipp', '..zipp')
        file.write_text(text)


def clean(vendor):
    """
    Remove all files out of the vendor directory except the meta
    data (as pip uninstall doesn't support -t).
    """
    remove_all(
        path
        for path in vendor.glob('*')
        if path.basename() != 'vendored.txt'
    )


def install(vendor):
    clean(vendor)
    install_args = [
        sys.executable,
        '-m', 'pip',
        'install',
        '-r', str(vendor / 'vendored.txt'),
        '-t', str(vendor),
    ]
    subprocess.check_call(install_args)
    (vendor / '__init__.py').write_text('')


def update_pkg_resources():
    vendor = Path('pkg_resources/_vendor')
    install(vendor)
    rewrite_packaging(vendor / 'packaging', 'pkg_resources.extern')
    rewrite_jaraco_text(vendor / 'jaraco/text', 'pkg_resources.extern')
    rewrite_jaraco(vendor / 'jaraco', 'pkg_resources.extern')
    rewrite_importlib_resources(vendor / 'importlib_resources', 'pkg_resources.extern')


def update_setuptools():
    vendor = Path('setuptools/_vendor')
    install(vendor)
    rewrite_packaging(vendor / 'packaging', 'setuptools.extern')


__name__ == '__main__' and update_vendored()

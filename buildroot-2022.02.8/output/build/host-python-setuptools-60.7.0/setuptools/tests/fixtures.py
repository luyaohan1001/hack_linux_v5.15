import contextlib
import sys
import subprocess

import pytest
import path

from . import contexts, environment


@pytest.fixture
def user_override(monkeypatch):
    """
    Override site.USER_BASE and site.USER_SITE with temporary directories in
    a context.
    """
    with contexts.tempdir() as user_base:
        monkeypatch.setattr('site.USER_BASE', user_base)
        with contexts.tempdir() as user_site:
            monkeypatch.setattr('site.USER_SITE', user_site)
            with contexts.save_user_site_setting():
                yield


@pytest.fixture
def tmpdir_cwd(tmpdir):
    with tmpdir.as_cwd() as orig:
        yield orig


@pytest.fixture(autouse=True, scope="session")
def workaround_xdist_376(request):
    """
    Workaround pytest-dev/pytest-xdist#376

    ``pytest-xdist`` tends to inject '' into ``sys.path``,
    which may break certain isolation expectations.
    Remove the entry so the import
    machinery behaves the same irrespective of xdist.
    """
    if not request.config.pluginmanager.has_plugin('xdist'):
        return

    with contextlib.suppress(ValueError):
        sys.path.remove('')


@pytest.fixture
def sample_project(tmp_path):
    """
    Clone the 'sampleproject' and return a path to it.
    """
    cmd = ['git', 'clone', 'https://github.com/pypa/sampleproject']
    try:
        subprocess.check_call(cmd, cwd=str(tmp_path))
    except Exception:
        pytest.skip("Unable to clone sampleproject")
    return tmp_path / 'sampleproject'


# sdist and wheel artifacts should be stable across a round of tests
# so we can build them once per session and use the files as "readonly"


@pytest.fixture(scope="session")
def setuptools_sdist(tmp_path_factory, request):
    with contexts.session_locked_tmp_dir(
            request, tmp_path_factory, "sdist_build") as tmp:
        dist = next(tmp.glob("*.tar.gz"), None)
        if dist:
            return dist

        subprocess.check_call([
            sys.executable, "-m", "build", "--sdist",
            "--outdir", str(tmp), str(request.config.rootdir)
        ])
        return next(tmp.glob("*.tar.gz"))


@pytest.fixture(scope="session")
def setuptools_wheel(tmp_path_factory, request):
    with contexts.session_locked_tmp_dir(
            request, tmp_path_factory, "wheel_build") as tmp:
        dist = next(tmp.glob("*.whl"), None)
        if dist:
            return dist

        subprocess.check_call([
            sys.executable, "-m", "build", "--wheel",
            "--outdir", str(tmp) , str(request.config.rootdir)
        ])
        return next(tmp.glob("*.whl"))


@pytest.fixture
def venv(tmp_path, setuptools_wheel):
    """Virtual env with the version of setuptools under test installed"""
    env = environment.VirtualEnv()
    env.root = path.Path(tmp_path / 'venv')
    env.req = str(setuptools_wheel)
    return env.create()


@pytest.fixture
def venv_without_setuptools(tmp_path):
    """Virtual env without any version of setuptools installed"""
    env = environment.VirtualEnv()
    env.root = path.Path(tmp_path / 'venv_without_setuptools')
    env.create_opts = ['--no-setuptools']
    env.ensure_env()
    return env


@pytest.fixture
def bare_venv(tmp_path):
    """Virtual env without any common packages installed"""
    env = environment.VirtualEnv()
    env.root = path.Path(tmp_path / 'bare_venv')
    env.create_opts = ['--no-setuptools', '--no-pip', '--no-wheel', '--no-seed']
    env.ensure_env()
    return env

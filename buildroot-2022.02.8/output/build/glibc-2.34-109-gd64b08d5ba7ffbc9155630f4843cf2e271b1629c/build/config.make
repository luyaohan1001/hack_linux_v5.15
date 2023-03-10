# config.make.  Generated from config.make.in by configure.
# Don't edit this file.  Put configuration parameters in configparms instead.

version = 2.34
release = stable

# Installation prefixes.
install_root = $(DESTDIR)
prefix = /usr
exec_prefix = ${prefix}
datadir = ${datarootdir}
libdir = ${exec_prefix}/lib64
bindir = ${exec_prefix}/bin
slibdir = /lib64
rtlddir = /lib64
complocaledir = ${exec_prefix}/lib/locale
sysconfdir = /etc
libexecdir = ${exec_prefix}/libexec
rootsbindir = /sbin
infodir = ${datarootdir}/info
includedir = ${prefix}/include
datarootdir = ${prefix}/share
localstatedir = /var
localedir = ${datarootdir}/locale
multidir= .

# Should we use and build ldconfig?
use-ldconfig = yes

# Maybe the `ldd' script must be rewritten.
ldd-rewrite-script = sysdeps/unix/sysv/linux/x86_64/ldd-rewrite.sed

# System configuration.
config-machine = x86_64
base-machine = x86_64
config-vendor = buildroot
config-os = linux-gnu
config-sysdirs =  sysdeps/unix/sysv/linux/x86_64/64 sysdeps/unix/sysv/linux/x86_64 sysdeps/unix/sysv/linux/x86 sysdeps/x86/nptl sysdeps/unix/sysv/linux/wordsize-64 sysdeps/x86_64/nptl sysdeps/unix/sysv/linux sysdeps/nptl sysdeps/pthread sysdeps/gnu sysdeps/unix/inet sysdeps/unix/sysv sysdeps/unix/x86_64 sysdeps/unix sysdeps/posix sysdeps/x86_64/64 sysdeps/x86_64/fpu/multiarch sysdeps/x86_64/fpu sysdeps/x86/fpu sysdeps/x86_64/multiarch sysdeps/x86_64 sysdeps/x86 sysdeps/ieee754/float128 sysdeps/ieee754/ldbl-96 sysdeps/ieee754/dbl-64 sysdeps/ieee754/flt-32 sysdeps/wordsize-64 sysdeps/ieee754 sysdeps/generic
cflags-cpu = 
asflags-cpu = 

config-extra-cflags = 
config-extra-cppflags = 
config-cflags-nofma = -ffp-contract=off

defines = 
sysheaders = /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/x86_64-buildroot-linux-gnu/sysroot/usr/include
sysincludes = -nostdinc -isystem /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib/gcc/x86_64-buildroot-linux-gnu/10.4.0/include -isystem /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib/gcc/x86_64-buildroot-linux-gnu/10.4.0/include-fixed -isystem /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/x86_64-buildroot-linux-gnu/sysroot/usr/include
c++-sysincludes = 
c++-cstdlib-header = 
c++-cmath-header = 
c++-bits-std_abs-h = 
all-warnings = 
enable-werror = no

have-z-combreloc = yes
have-z-execstack = yes
have-protected-data = yes
have-insert = yes
have-glob-dat-reloc = yes
with-fp = yes
enable-timezone-tools = yes
unwind-find-fde = no
have-fpie = yes
have-ssp = no
stack-protector = -fno-stack-protector
no-stack-protector = 
have-selinux = no
have-libaudit = 
have-libcap = 
have-cc-with-libunwind = no
fno-unit-at-a-time = -fno-toplevel-reorder -fno-section-anchors
bind-now = no
have-hash-style = yes
use-default-link = no
have-cxx-thread_local = no
have-loop-to-function = yes
have-textrel_ifunc = yes

multi-arch = default

mach-interface-list = 

experimental-malloc = yes

memory-tagging = no

nss-crypt = no
static-nss-crypt = no

# Configuration options.
build-shared = yes
build-pic-default= yes
build-pie-default= yes
cc-pie-default= yes
build-profile = no
build-static-nss = no
cross-compiling = yes
force-install = yes
build-crypt = yes
build-nscd = yes
use-nscd = yes
build-hardcoded-path-in-tests= no
build-pt-chown = no
have-tunables = yes
pthread-in-libc = yes

# Build tools.
CC = /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/bin/x86_64-buildroot-linux-gnu-gcc
CXX = 
BUILD_CC = gcc
CFLAGS = -O2 -fno-lto
CPPFLAGS-config = 
CPPUNDEFS = 
extra-nonshared-cflags = 
ASFLAGS-config =  -Wa,--noexecstack
AR = /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib/gcc/x86_64-buildroot-linux-gnu/10.4.0/../../../../x86_64-buildroot-linux-gnu/bin/ar
NM = /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/bin/x86_64-buildroot-linux-gnu-gcc-nm
MAKEINFO = makeinfo
AS = $(CC) -c
BISON = bison
AUTOCONF = no
OBJDUMP = /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib/gcc/x86_64-buildroot-linux-gnu/10.4.0/../../../../x86_64-buildroot-linux-gnu/bin/objdump
OBJCOPY = /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib/gcc/x86_64-buildroot-linux-gnu/10.4.0/../../../../x86_64-buildroot-linux-gnu/bin/objcopy
GPROF = gprof
READELF = /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/bin/x86_64-buildroot-linux-gnu-readelf

# Installation tools.
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_INFO = /usr/bin/install-info
LN_S = ln -s
MSGFMT = :

# Script execution tools.
BASH = /bin/sh
AWK = gawk
PERL = /usr/bin/perl
PYTHON = python3 -B

# Additional libraries.
LIBGD = no

# Package versions and bug reporting configuration.
PKGVERSION = (Buildroot) 
PKGVERSION_TEXI = (Buildroot) 
REPORT_BUGS_TO = <https://www.gnu.org/software/libc/bugs.html>
REPORT_BUGS_TEXI = @uref{https://www.gnu.org/software/libc/bugs.html}

# More variables may be inserted below by configure.

have-gnu-retain = no
have-z-start-stop-gc = no
have-no-dynamic-linker = yes
have-static-pie = yes
have-mtls-dialect-gnu2 = yes
config-cflags-avx512 = yes
config-cflags-mprefer-vector-width = yes
enable-cet = no
enable-x86-isa-level = yes
build-mathvec = yes
have-ifunc = yes
have-gcc-ifunc = yes
enable-static-pie = no

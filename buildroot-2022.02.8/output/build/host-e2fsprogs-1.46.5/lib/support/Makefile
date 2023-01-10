# Makefile for e2fsprog's internal support
#

srcdir = .
top_srcdir = ../..

top_builddir = ../..
my_dir = lib/support
INSTALL = /usr/bin/install -c
MKDIR_P = /usr/bin/mkdir -p

# Beginning of file MCONFIG

all::

all-static::

check::

fullcheck::

SHELL = /bin/sh

COMPRESS_EXT = gz bz2 bz Z

prefix = /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host
root_prefix = /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host
exec_prefix = ${prefix}
root_bindir = ${exec_prefix}/bin
root_sbindir = ${exec_prefix}/sbin
root_libdir = ${exec_prefix}/lib
datarootdir = ${prefix}/share
bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libdir = ${exec_prefix}/lib
datadir= ${datarootdir}
localedir = $(datadir)/locale
root_sysconfdir= /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/etc
includedir = ${prefix}/include
mandir = ${datarootdir}/man
man1dir = $(mandir)/man1
man3dir = $(mandir)/man3
man5dir = $(mandir)/man5
man8dir = $(mandir)/man8
infodir = ${datarootdir}/info
datadir = ${datarootdir}
pkgconfigdir = $(libdir)/pkgconfig
pkglibdir = $(libdir)/e2fsprogs

HAVE_UDEV = disabled
UDEV_RULES_DIR = 
HAVE_CROND = disabled
CROND_DIR = 
HAVE_SYSTEMD = disabled
SYSTEMD_SYSTEM_UNIT_DIR = 



 V =
 ifeq ($(strip $(V)),)
 #  E = @echo
 #  ES = echo
 #  Q = @
    E = @echo
    ES = echo
    Q = @
 else
    E = @\#
    ES = \#
    Q =
 endif

# E = @echo
# ES = echo
# Q = @

 CHECK=sparse
 CHECK_OPTS=-Wsparse-all -Wno-transparent-union -Wno-return-void -Wno-undef -Wno-non-pointer-null
 CPPCHECK=cppcheck
 CPPCHECK_OPTS=--force --enable=all --quiet
 ifeq ("$(C)", "2")
   CHECK_CMD=$(CHECK) $(CHECK_OPTS) -Wbitwise -D__CHECK_ENDIAN__
   CPPCHECK_CMD=$(CPPCHECK) $(CPPCHECK_OPTS)
 else
   ifeq ("$(C)", "1")
     CHECK_CMD=$(CHECK) $(CHECK_OPTS)
     CPPCHECK_CMD=$(CPPCHECK) $(CPPCHECK_OPTS)
    else
     CHECK_CMD=@true
     CPPCHECK_CMD=@true
   endif
 endif

# CHECK_CMD=true
# CPPCHECK_CMD=true

SANITIZER_CFLAGS =    
SANITIZER_LDFLAGS =    

CC = /usr/bin/gcc
BUILD_CC = /usr/bin/gcc
PTHREAD_CFLAGS = -pthread
PTHREAD_LIBS = 
CFLAGS = -O2 -I/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/include
CFLAGS_SHLIB = -O2 -I/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/include
CFLAGS_STLIB = -O2 -I/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/include
CPPFLAGS = -I. -I$(top_builddir)/lib -I$(top_srcdir)/lib -I/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/include
ALL_CFLAGS = $(CPPFLAGS) $(SANITIZER_CFLAGS) $(CFLAGS) $(PTHREAD_CFLAGS) $(CFLAGS_WARN) -DHAVE_CONFIG_H $(LOCAL_CFLAGS)
ALL_CFLAGS_SHLIB = $(CPPFLAGS) $(SANITIZER_CFLAGS) $(CFLAGS_SHLIB) $(PTHREAD_CFLAGS) $(CFLAGS_WARN) -DHAVE_CONFIG_H $(LOCAL_CFLAGS)
ALL_CFLAGS_STLIB = $(CPPFLAGS) $(SANITIZER_CFLAGS) $(CFLAGS_STLIB) $(PTHREAD_CFLAGS) $(CFLAGS_WARN) -DHAVE_CONFIG_H $(LOCAL_CFLAGS)
LDFLAGS = $(SANITIZER_LDFLAGS) $(PTHREAD_CFLAGS) -L/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib -Wl,-rpath,/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib
LDFLAGS_SHLIB = $(SANITIZER_LDFLAGS) $(PTHREAD_CFLAGS) -L/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib -Wl,-rpath,/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib
ALL_LDFLAGS = $(LDFLAGS) -Wl,-rpath-link,$(top_builddir)/lib
LDFLAGS_STATIC = $(SANITIZER_LDFLAGS) $(PTHREAD_CFLAGS) -L/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib -Wl,-rpath,/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib -static
BUILD_CFLAGS = $(SANITIZER_CFLAGS) -O2 -I/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/include -I/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/include -I. -I$(top_builddir)/lib -I$(top_srcdir)/lib -I/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/include -DHAVE_CONFIG_H
BUILD_LDFLAGS = $(SANITIZER_LDFLAGS) -L/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib -Wl,-rpath,/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib
RDYNAMIC = -rdynamic
LINK_BUILD_FLAGS = 
LINK_INSTALL_FLAGS = -sf
RM = /usr/bin/rm
LN = /usr/bin/ln
LN_S = ln -s
MV = /usr/bin/mv
CP = /usr/bin/cp
CHMOD = /usr/bin/chmod
AR = /usr/bin/ar
AWK = gawk
SED = /usr/bin/sed
PERL = /usr/bin/perl
RANLIB = /usr/bin/ranlib
STRIP = strip
LD = $(PURE) /usr/bin/gcc
ARUPD = $(AR) r
ARGEN = $(AR) rc
LDCONFIG = true
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL}

#
# Library definitions
#
LIB = $(top_builddir)/lib
LIBSS = $(LIB)/libss.so # -ldl
LIBCOM_ERR = $(LIB)/libcom_err.so # 
LIBE2P = $(LIB)/libe2p.so
LIBEXT2FS = $(LIB)/libext2fs.so
LIBUUID = -L/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib -luuid  
LIBMAGIC = -ldl
LIBFUSE = 
LIBSUPPORT = $(LIBINTL) $(LIB)/libsupport.a
LIBBLKID = -L/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib -lblkid  # $(LIBUUID)
LIBINTL = 
SYSLIBS =  
DEPLIBSS = $(LIB)/libss.so
DEPLIBCOM_ERR = $(LIB)/libcom_err.so
DEPLIBUUID = 
DEPLIBSUPPORT = $(LIB)/libsupport.a
DEPLIBBLKID =  # $(DEPLIBUUID)
TESTENV = LD_LIBRARY_PATH="$(LIB):$${LD_LIBRARY_PATH}" DYLD_LIBRARY_PATH="$(LIB):$${DYLD_LIBRARY_PATH}"

STATIC_LIBSS = $(LIB)/libss.a -ldl
STATIC_LIBCOM_ERR = $(LIB)/libcom_err.a 
STATIC_LIBE2P = $(LIB)/libe2p.a
STATIC_LIBEXT2FS = $(LIB)/libext2fs.a
STATIC_LIBUUID = -L/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib -luuid  
STATIC_LIBSUPPORT = $(LIBINTL) $(LIBSUPPORT)
STATIC_LIBBLKID = -L/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib -lblkid  $(STATIC_LIBUUID)
DEPSTATIC_LIBSS = $(LIB)/libss.a
DEPSTATIC_LIBCOM_ERR = $(LIB)/libcom_err.a
DEPSTATIC_LIBUUID = 
DEPSTATIC_LIBSUPPORT = $(DEPLIBSUPPORT)
DEPSTATIC_LIBBLKID =  $(DEPSTATIC_LIBUUID)

PROFILED_LIBSS = $(LIB)/libss.a -ldl
PROFILED_LIBCOM_ERR = $(LIB)/libcom_err.a 
PROFILED_LIBE2P = $(LIB)/libe2p.a
PROFILED_LIBEXT2FS = $(LIB)/libext2fs.a
PROFILED_LIBUUID = -L/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib -luuid  
PROFILED_LIBSUPPORT = $(LIBINTL) $(LIB)/libsupport.a
PROFILED_LIBBLKID = -L/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib -lblkid  $(PROFILED_LIBUUID)
DEPPROFILED_LIBSS = $(LIB)/libss.a
DEPPROFILED_LIBCOM_ERR = $(LIB)/libcom_err.a
DEPPROFILED_LIBUUID = -L/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib -luuid 
DEPPROFILED_LIBSUPPORT = $(PROFILED_LIBSUPPORT)
DEPPROFILED_LIBBLKID = -L/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/lib -lblkid  $(DEPPROFILED_LIBUUID)

#
# A fast substitution command for fixing up man pages, shell scripts, etc.
#
SUBST_CONF=$(top_builddir)/util/subst.conf
SUBSTITUTE= $(top_builddir)/util/subst -f $(SUBST_CONF)
SUBSTITUTE_UPTIME= $(top_builddir)/util/subst -t -f $(SUBST_CONF)
DEP_SUBSTITUTE= $(top_builddir)/util/subst $(SUBST_CONF)

$(top_builddir)/util/subst:
	cd $(top_builddir)/util ; $(MAKE) subst

#
# Script for generating utf8data.h
#
MKUTF8DATA=$(top_builddir)/util/mkutf8data

$(top_builddir)/util/mkutf8data:
	 $(MAKE) -C $(top_builddir)/util mkutf8data

#
# Script for installing symlinks (for shared libraries)
#
$(top_builddir)/util/install-symlink: $(top_srcdir)/util/install-symlink.in \
			      $(top_builddir)/config.status
	cd $(top_builddir); CONFIG_FILES=util/install-symlink ./config.status
	chmod +x $(top_builddir)/util/install-symlink

$(top_builddir)/util/symlinks:
	cd $(top_builddir)/util ; $(MAKE) symlinks

INSTALL_SYMLINK = /bin/sh $(top_builddir)/util/install-symlink \
			 \
			--symlinks=$(top_builddir)/util/symlinks
DEP_INSTALL_SYMLINK = $(top_builddir)/util/install-symlink \
			$(top_builddir)/util/symlinks

#
# Warning flags
#
# Run make gcc-wall to do a build with warning messages.
#
#
WFLAGS=		-std=gnu99 -D_XOPEN_SOURCE=600 -D_GNU_SOURCE $(WFLAGS_EXTRA) \
			-Wall -W -Wwrite-strings -Wpointer-arith \
			-Wcast-qual -Wcast-align -Wno-variadic-macros \
			-Wstrict-prototypes -Wmissing-prototypes \
			-Wformat-security  -Wformat-nonliteral \
			-Wmissing-format-attribute -O2 -Wstrict-aliasing \
			-Wnested-externs -Winline -DNO_INLINE_FUNCS -Wshadow \
			-UENABLE_NLS

gcc-wall-new:
	($(MAKE) CFLAGS_WARN="$(WFLAGS)" > /dev/null) 2>&1

gcc-wall:
	$(MAKE) clean > /dev/null
	$(MAKE) gcc-wall-new

static-check:
	($(MAKE) C=1 V=1 CFLAGS="$(ALL_CFLAGS) $(WFLAGS)") 2>&1

static-check-all:
	$(MAKE) clean > /dev/null
	$(MAKE) static-check

#
# Installation user and groups
#
BINGRP=		bin
BINOWN=		bin
BINMODE=	555
INCGRP=		bin
INCOWN=		bin
INCMODE=	444
LIBOWN=		bin
LIBGRP=		bin
LIBMODE=	444
MANGRP=		bin
MANOWN=		bin
MANMODE=	444

#
# Autoconf magic...
#

DEP_LIB_MAKEFILES = $(top_srcdir)/lib/Makefile.library \
	$(top_srcdir)/lib/Makefile.elf-lib  \
	$(top_srcdir)/lib/Makefile.bsd-lib \
	$(top_srcdir)/lib/Makefile.darwin-lib \
	$(top_srcdir)/lib/Makefile.solaris-lib \
	$(top_srcdir)/lib/Makefile.profile

$(top_builddir)/config.status: $(top_srcdir)/configure
	cd $(top_builddir); ./config.status --recheck

$(top_builddir)/MCONFIG: $(top_srcdir)/MCONFIG.in $(top_builddir)/config.status
	cd $(top_builddir); CONFIG_FILES=MCONFIG ./config.status

$(top_builddir)/lib/config.h: $(top_srcdir)/lib/config.h.in \
			      $(top_builddir)/config.status
	cd $(top_builddir); CONFIG_FILES=lib/config.h ./config.status

$(top_builddir)/lib/dirpaths.h: $(DEP_SUBSTITUTE) $(top_srcdir)/lib/dirpaths.h.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE) $(top_srcdir)/lib/dirpaths.h.in $@

$(top_builddir)/lib/substitute_sh: $(top_srcdir)/lib/substitute_sh.in \
		$(top_builddir)/config.status
	cd $(top_builddir); CONFIG_FILES=lib/substitute_sh ./config.status

$(top_builddir)/util/subst.conf: $(top_srcdir)/util/subst.conf.in \
		$(top_builddir)/config.status
	cd $(top_builddir); CONFIG_FILES=util/subst.conf ./config.status

Makefile: $(srcdir)/Makefile.in $(top_builddir)/MCONFIG \
		$(DEP_MAKEFILE) $(top_builddir)/config.status
	cd $(top_builddir); CONFIG_FILES=$(my_dir)/Makefile ./config.status

#$(top_srcdir)/configure: $(top_srcdir)/configure.ac
#	cd $(top_srcdir) && autoheader && autoconf

coverage.txt: Makefile $(SRCS)
	if test -n "$(SRCS)"; then \
		gcov -s $(top_srcdir) -o . $(SRCS) > coverage.txt 2>&1 ; \
	fi

clean::
	$(RM) -f *.gcda *.gcov *.gcno coverage.txt

#
# Make depend magic...
#

.depend: Makefile $(SRCS) $(top_srcdir)/depfix.sed $(top_srcdir)/wordwrap.pl
	if test -n "$(SRCS)" ; then \
		$(CC) -M $(ALL_CFLAGS) $(DEPEND_CFLAGS) $(SRCS) | \
			$(SED) -f $(top_srcdir)/depfix.sed \
			    -e 's; $(srcdir)/; $$(srcdir)/;g' \
			    -e 's; $(top_srcdir)/; $$(top_srcdir)/;g' \
			    -e 's; $(top_builddir)/; $$(top_builddir)/;g' \
			    -e 's; \./; ;g' \
			    -e '/^#/d' \
			    -e '/^ *\\$$/d' | \
			$(PERL) $(top_srcdir)/wordwrap.pl > .depend; \
	else :; fi

depend:: .depend
	if test -n "$(SRCS)" ; then \
		sed -e '/^# +++ Dependency line eater +++/,$$d' \
			< $(srcdir)/Makefile.in | cat - .depend \
			> $(srcdir)/Makefile.in.new; \
	if cmp -s $(srcdir)/Makefile.in $(srcdir)/Makefile.in.new ; then \
		$(RM) $(srcdir)/Makefile.in.new ; \
	else \
		$(MV) $(srcdir)/Makefile.in $(srcdir)/Makefile.in.old; \
		$(MV) $(srcdir)/Makefile.in.new $(srcdir)/Makefile.in; \
	fi ; else :; fi

# End of file MCONFIG

all::

OBJS=		cstring.o \
		mkquota.o \
		plausible.o \
		profile.o \
		parse_qtype.o \
		profile_helpers.o \
		prof_err.o \
		quotaio.o \
		quotaio_v2.o \
		quotaio_tree.o \
		dict.o

SRCS=		$(srcdir)/argv_parse.c \
		$(srcdir)/cstring.c \
		$(srcdir)/mkquota.c \
		$(srcdir)/parse_qtype.c \
		$(srcdir)/plausible.c \
		$(srcdir)/profile.c \
		$(srcdir)/profile_helpers.c \
		prof_err.c \
		$(srcdir)/quotaio.c \
		$(srcdir)/quotaio_tree.c \
		$(srcdir)/quotaio_v2.c \
		$(srcdir)/dict.c

LIBRARY= libsupport
LIBDIR= support

all:: subdirs $(LIBRARY).a

install-shlibs-strip::

install-shlibs::

uninstall-shlibs::

real-subdirs::

subdirs:: Makefile
	$(Q) $(MAKE) -s real-subdirs
	$(Q) touch subdirs

clean::
	$(Q) $(RM) -f subdirs

$(LIBRARY).a: $(OBJS)
	$(E) "	GEN_LIB $@"
	$(Q) (if test -r $@; then $(RM) -f $@.bak && $(MV) $@ $@.bak; fi)
	$(Q) $(ARGEN) $@ $(OBJS)
	-@$(RANLIB) $@
	$(Q) $(RM) -f ../$@
	$(Q) (cd ..; $(LN) $(LINK_BUILD_FLAGS) \
		`echo $(my_dir) | sed -e 's;lib/;;'`/$@ $@)

$(LIB)/$(LIBRARY).a: $(LIBRARY).a

COMPILE_ET=	_ET_DIR_OVERRIDE=$(srcdir)/../et ../et/compile_et

.c.o:
	$(E) "	CC $<"
	$(Q) $(CC) $(ALL_CFLAGS) -c $< -o $@
	$(Q) $(CHECK_CMD) $(ALL_CFLAGS) $<
	$(Q) $(CPPCHECK_CMD) $(CPPFLAGS) $<
#	$(Q) $(CC) $(ALL_CFLAGS) -g -pg -o profiled/$*.o -c $<

installdirs::

install:: all

uninstall::

prof_err.c prof_err.h: prof_err.et
	$(E) "	COMPILE_ET prof_err.et"
	$(Q) $(COMPILE_ET) $(srcdir)/prof_err.et

test_profile: $(srcdir)/profile.c profile_helpers.o argv_parse.o \
		prof_err.o profile.h $(DEPSTATIC_LIBCOM_ERR)
	$(E) "	LD $@"
	$(Q) $(CC) -o test_profile -DDEBUG_PROGRAM $(srcdir)/profile.c prof_err.o \
		profile_helpers.o argv_parse.o $(STATIC_LIBCOM_ERR) \
		$(ALL_CFLAGS)

test_cstring: $(srcdir)/cstring.c
	$(E) " CC $@"
	$(Q) $(CC) -o test_cstring -DDEBUG_PROGRAM $(srcdir)/cstring.c \
		$(ALL_CFLAGS)

clean::
	$(RM) -f \#* *.s *.o *.a *~ *.bak core profiled/* \
		../libsupport.a ../libsupport_p.a $(SMANPAGES) \
		prof_err.c prof_err.h test_profile test_cstring

#fullcheck check:: tst_uuid
#	LD_LIBRARY_PATH=$(LIB) DYLD_LIBRARY_PATH=$(LIB) ./tst_uuid

mostlyclean:: clean
distclean:: clean
	$(RM) -f .depend Makefile \
		$(srcdir)/TAGS $(srcdir)/Makefile.in.old

#
# Hack to parallel makes recognize dependencies correctly.
#
../../lib/libsupport.a: libsupport.a
../../lib/libsupport.so: image
../../lib/libsupport.dylib: image

$(OBJS):

# +++ Dependency line eater +++
# 
# Makefile dependencies follow.  This must be the last section in
# the Makefile.in file
#
argv_parse.o: $(srcdir)/argv_parse.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/argv_parse.h
cstring.o: $(srcdir)/cstring.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/cstring.h
mkquota.o: $(srcdir)/mkquota.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/ext2fs/ext2fs.h \
 $(top_srcdir)/lib/ext2fs/ext3_extents.h $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_io.h $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_ext_attr.h $(top_srcdir)/lib/ext2fs/hashmap.h \
 $(top_srcdir)/lib/ext2fs/bitops.h $(top_srcdir)/lib/e2p/e2p.h \
 $(srcdir)/quotaio.h $(srcdir)/dqblk_v2.h $(srcdir)/quotaio_tree.h \
 $(srcdir)/quotaio_v2.h $(srcdir)/common.h $(srcdir)/dict.h
parse_qtype.o: $(srcdir)/parse_qtype.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/quotaio.h \
 $(top_srcdir)/lib/ext2fs/ext2_fs.h $(top_builddir)/lib/ext2fs/ext2_types.h \
 $(top_srcdir)/lib/ext2fs/ext2fs.h $(top_srcdir)/lib/ext2fs/ext3_extents.h \
 $(top_srcdir)/lib/et/com_err.h $(top_srcdir)/lib/ext2fs/ext2_io.h \
 $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_ext_attr.h $(top_srcdir)/lib/ext2fs/hashmap.h \
 $(top_srcdir)/lib/ext2fs/bitops.h $(srcdir)/dqblk_v2.h \
 $(srcdir)/quotaio_tree.h
plausible.o: $(srcdir)/plausible.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/plausible.h \
 $(top_srcdir)/lib/ext2fs/ext2fs.h $(top_builddir)/lib/ext2fs/ext2_types.h \
 $(top_srcdir)/lib/ext2fs/ext2_fs.h $(top_srcdir)/lib/ext2fs/ext3_extents.h \
 $(top_srcdir)/lib/et/com_err.h $(top_srcdir)/lib/ext2fs/ext2_io.h \
 $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_ext_attr.h $(top_srcdir)/lib/ext2fs/hashmap.h \
 $(top_srcdir)/lib/ext2fs/bitops.h $(srcdir)/nls-enable.h
profile.o: $(srcdir)/profile.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(top_srcdir)/lib/et/com_err.h \
 $(srcdir)/profile.h prof_err.h
profile_helpers.o: $(srcdir)/profile_helpers.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(top_srcdir)/lib/et/com_err.h \
 $(srcdir)/profile.h $(srcdir)/profile_helpers.h prof_err.h
prof_err.o: prof_err.c
quotaio.o: $(srcdir)/quotaio.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/common.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(srcdir)/quotaio.h \
 $(top_srcdir)/lib/ext2fs/ext2_fs.h $(top_srcdir)/lib/ext2fs/ext2fs.h \
 $(top_srcdir)/lib/ext2fs/ext3_extents.h $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_io.h $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_ext_attr.h $(top_srcdir)/lib/ext2fs/hashmap.h \
 $(top_srcdir)/lib/ext2fs/bitops.h $(srcdir)/dqblk_v2.h \
 $(srcdir)/quotaio_tree.h
quotaio_tree.o: $(srcdir)/quotaio_tree.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/common.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(srcdir)/quotaio_tree.h \
 $(srcdir)/quotaio.h $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_srcdir)/lib/ext2fs/ext2fs.h $(top_srcdir)/lib/ext2fs/ext3_extents.h \
 $(top_srcdir)/lib/et/com_err.h $(top_srcdir)/lib/ext2fs/ext2_io.h \
 $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_ext_attr.h $(top_srcdir)/lib/ext2fs/hashmap.h \
 $(top_srcdir)/lib/ext2fs/bitops.h $(srcdir)/dqblk_v2.h
quotaio_v2.o: $(srcdir)/quotaio_v2.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/common.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(srcdir)/quotaio_v2.h \
 $(srcdir)/quotaio.h $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_srcdir)/lib/ext2fs/ext2fs.h $(top_srcdir)/lib/ext2fs/ext3_extents.h \
 $(top_srcdir)/lib/et/com_err.h $(top_srcdir)/lib/ext2fs/ext2_io.h \
 $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_ext_attr.h $(top_srcdir)/lib/ext2fs/hashmap.h \
 $(top_srcdir)/lib/ext2fs/bitops.h $(srcdir)/dqblk_v2.h \
 $(srcdir)/quotaio_tree.h
dict.o: $(srcdir)/dict.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/dict.h

#
# Makefile for lib/ss
#

srcdir = .
top_srcdir = ../..

top_builddir = ../..
my_dir = lib/ss
INSTALL = /usr/bin/install -c
MKDIR_P = /usr/bin/mkdir -p
DLOPEN_LIB = -ldl

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

LIBRARY= libss
LIBDIR= ss

ELF_VERSION = 2.0
ELF_SO_VERSION = 2
ELF_IMAGE = libss
ELF_MYDIR = ss
ELF_INSTALL_DIR = $(root_libdir)
ELF_OTHER_LIBS = -lcom_err $(DLOPEN_LIB)

BSDLIB_VERSION = 1.0
BSDLIB_IMAGE = libss
BSDLIB_MYDIR = ss
BSDLIB_INSTALL_DIR = $(root_libdir)

TAGS=etags
MK_CMDS=	_SS_DIR_OVERRIDE=$(srcdir) ./mk_cmds
COMPILE_ET=	_ET_DIR_OVERRIDE=$(srcdir)/../et ../et/compile_et

.c.o:
	$(E) "	CC $<"
	$(Q) $(CC) $(ALL_CFLAGS_STLIB) -c $<
	$(Q) $(CHECK_CMD) $(ALL_CFLAGS) $<
	$(Q) $(CPPCHECK_CMD) $(CPPFLAGS) $<
#	$(Q) $(CC) $(ALL_CFLAGS_STLIB) -g -pg -o profiled/$*.o -c $<
	$(Q) $(CC) $(ALL_CFLAGS_SHLIB) -DSHARED_ELF_LIB -fPIC -shared -o elfshared/$*.o -c $<
#	$(Q) $(CC) $(ALL_CFLAGS_SHLIB) $(BSDLIB_PIC_FLAG) -o pic/$*.o -c $<

# for the library

# with ss_err.o first, ss_err.h should get rebuilt first too.  should not
# be relying on this, though.
OBJS=	ss_err.o \
	std_rqs.o \
	invocation.o help.o \
	execute_cmd.o listen.o parse.o error.o prompt.o \
	request_tbl.o list_rqs.o pager.o requests.o \
	data.o get_readline.o

SRCS=	$(srcdir)/invocation.c $(srcdir)/help.c \
	$(srcdir)/execute_cmd.c $(srcdir)/listen.c $(srcdir)/parse.c \
	$(srcdir)/error.c $(srcdir)/prompt.c $(srcdir)/request_tbl.c \
	$(srcdir)/list_rqs.c $(srcdir)/pager.c $(srcdir)/requests.c \
	$(srcdir)/data.c $(srcdir)/get_readline.c

all:: mk_cmds

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
#
# This is a Makefile stub which handles the creation of Linux ELF shared
# libraries.
#
# In order to use this stub, the following makefile variables must be defined.
# 
# ELF_VERSION = 1.0
# ELF_SO_VERSION = 1
# ELF_IMAGE = libce
# ELF_MYDIR = et
# ELF_INSTALL_DIR = $(SHLIBDIR)
# ELF_OTHER_LIBS = -lc

all:: image

real-subdirs:: Makefile
	$(E) "	MKDIR elfshared"
	$(Q) mkdir -p elfshared

ELF_LIB = $(ELF_IMAGE).so.$(ELF_VERSION)
ELF_SONAME = $(ELF_IMAGE).so.$(ELF_SO_VERSION)

image:		$(ELF_LIB)

$(ELF_LIB): $(OBJS)
	$(E) "	GEN_ELF_SOLIB $(ELF_LIB)"
	$(Q) (cd elfshared; $(CC) -o $(ELF_LIB) \
		-L$(top_builddir)/../lib $(LDFLAGS_SHLIB) -fPIC -shared \
		-Wl,-soname,$(ELF_SONAME) $(OBJS) $(ELF_OTHER_LIBS))
	$(Q) $(MV) elfshared/$(ELF_LIB) .
	$(Q) $(RM) -f ../$(ELF_LIB) ../$(ELF_IMAGE).so ../$(ELF_SONAME)
	$(Q) (cd ..; $(LN) $(LINK_BUILD_FLAGS) \
		`echo $(my_dir) | sed -e 's;lib/;;'`/$(ELF_LIB) $(ELF_LIB))
	$(Q) (cd ..; $(LN) $(LINK_BUILD_FLAGS) $(ELF_LIB) $(ELF_IMAGE).so)
	$(Q) (cd ..; $(LN) $(LINK_BUILD_FLAGS) $(ELF_LIB) $(ELF_SONAME))

installdirs-elf-lib::
	$(E) "	MKDIR_P $(ELF_INSTALL_DIR) $(libdir)"
	$(Q) $(MKDIR_P) $(DESTDIR)$(ELF_INSTALL_DIR) \
		$(DESTDIR)$(libdir)

installdirs:: installdirs-elf-lib

install-shlibs install:: $(ELF_LIB) installdirs-elf-lib $(DEP_INSTALL_SYMLINK)
	$(E) "	INSTALL-ELF-LIB $(ELF_INSTALL_DIR)/$(ELF_LIB)"
	$(Q) $(INSTALL_PROGRAM) $(ELF_LIB) $(DESTDIR)$(ELF_INSTALL_DIR)/$(ELF_LIB)
	$(E) "	SYMLINK $(ELF_INSTALL_DIR)/$(ELF_SONAME)"
	$(Q) $(INSTALL_SYMLINK) $(ELF_INSTALL_DIR)/$(ELF_LIB) \
		$(ELF_INSTALL_DIR)/$(ELF_SONAME) $(DESTDIR)
	$(E) "	SYMLINK $(libdir)/$(ELF_IMAGE).so"
	$(Q) $(INSTALL_SYMLINK) $(ELF_INSTALL_DIR)/$(ELF_SONAME) \
		$(libdir)/$(ELF_IMAGE).so $(DESTDIR)
	$(E) "	LDCONFIG"
	$(Q) -$(LDCONFIG)

install-strip: install
	$(E) "	STRIP-LIB $(ELF_INSTALL_DIR)/$(ELF_LIB)"
	$(Q) $(STRIP) --strip-unneeded --remove-section=.comment \
		--remove-section=.note $(DESTDIR)$(ELF_INSTALL_DIR)/$(ELF_LIB)

install-shlibs-strip:: install-shlibs
	$(E) "	STRIP-LIB $(ELF_INSTALL_DIR)/$(ELF_LIB)"
	$(Q) $(STRIP) --strip-unneeded --remove-section=.comment \
		--remove-section=.note $(DESTDIR)$(ELF_INSTALL_DIR)/$(ELF_LIB)

uninstall-shlibs uninstall::
	$(RM) -f $(DESTDIR)$(ELF_INSTALL_DIR)/$(ELF_LIB) \
		$(DESTDIR)$(ELF_INSTALL_DIR)/$(ELF_SONAME) \
		$(DESTDIR)$(libdir)/$(ELF_IMAGE).so
	-$(LDCONFIG)

clean::
	$(RM) -rf elfshared
	$(RM) -f $(ELF_LIB)
	$(RM) -f ../$(ELF_LIB) ../$(ELF_IMAGE).so ../$(ELF_SONAME)

CODE= $(SRCS) $(MKCMDSFILES)

MKCMDSOBJS=	mk_cmds.o utils.o options.o ct.tab.o cmd_tbl.lex.o

MKCMDSFILES=	mk_cmds.c utils.c options.c ct.y cmd_tbl.lex.l

MKCMDSCSRCS=	mk_cmds.c utils.c options.c ct.tab.c cmd_tbl.lex.c


HFILES=	ss.h ss_internal.h
SHARE_FILES= ct_c.awk ct_c.sed

INSTALL_HFILES=	ss.h 

# for 'tags' and dependencies

CFILES=	$(SRCS) $(MKCMDSCSRCS) test_ss.c

# for building archives

FILES=	$(SRCS) $(MKCMDSFILES) $(HFILES) \
	ss_err.et std_rqs.ct Makefile \
	test_ss.c ss 

all::	libss.a ss.pc # libss_p.a lint

std_rqs.c: std_rqs.ct mk_cmds
	$(E) "	MK_CMDS $@"
	$(Q) DIR=$(srcdir) $(MK_CMDS) $(srcdir)/std_rqs.ct

std_rqs.o: ss_err.h

test_cmd.c: test_cmd.ct mk_cmds
	$(E) "	MK_CMDS $@"
	$(Q) DIR=$(srcdir) $(MK_CMDS) $(srcdir)/test_cmd.ct

ss_err.c ss_err.h: ss_err.et
	$(E) "	COMPILE_ET ss_err.et"
	$(Q) $(COMPILE_ET) $(srcdir)/ss_err.et

ct.tab.c ct.tab.h: ct.y
	$(RM) -f ct.tab.* y.*
	$(YACC) -d $(srcdir)/ct.y
	$(MV) -f y.tab.c ct.tab.c
	$(MV) -f y.tab.h ct.tab.h

#libss.o:	$(OBJS)
#	$(LD) -r -s -o $@ $(OBJS)
#	$(CHMOD) -x $@

mk_cmds: $(DEP_SUBSTITUTE) $(srcdir)/mk_cmds.sh.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE) $(srcdir)/mk_cmds.sh.in mk_cmds
	$(Q) $(CHMOD) +x mk_cmds

ss.pc: $(srcdir)/ss.pc.in $(top_builddir)/config.status
	$(E) "	CONFIG.STATUS $@"
	$(Q) cd $(top_builddir); CONFIG_FILES=lib/ss/ss.pc ./config.status

installdirs::
	$(E) "	MKDIR_P $(libdir) $(includedir)/ss $(datadir)/ss $(bindir)"
	$(Q) $(MKDIR_P) $(DESTDIR)$(libdir) \
		$(DESTDIR)$(includedir)/ss $(DESTDIR)$(datadir)/ss \
		$(DESTDIR)$(bindir) $(DESTDIR)$(pkgconfigdir)

install:: libss.a $(INSTALL_HFILES) installdirs ss_err.h mk_cmds ss.pc
	$(E) "	INSTALL_DATA $(DESTDIR)$(libdir)/libss.a"
	$(Q) $(INSTALL_DATA) libss.a $(DESTDIR)$(libdir)/libss.a
	-$(Q) $(RANLIB) $(DESTDIR)$(libdir)/libss.a
	$(Q) $(CHMOD) $(LIBMODE) $(DESTDIR)$(libdir)/libss.a
	$(Q) $(RM) -f $(DESTDIR)$(includedir)/ss/*
	$(Q) for i in $(INSTALL_HFILES); do \
		echo "	INSTALL_DATA $(DESTDIR)$(includedir)/ss/$$i"; \
		$(INSTALL_DATA) $(srcdir)/$$i $(DESTDIR)$(includedir)/ss/$$i; \
	done
	$(E) "	INSTALL_DATA $(includedir)/ss/ss_err.h"
	$(Q) $(INSTALL_DATA) ss_err.h $(DESTDIR)$(includedir)/ss/ss_err.h
	$(Q) for i in $(SHARE_FILES); do \
		echo "	INSTALL_DATA $(DESTDIR)$(datadir)/ss/$$i"; \
		$(INSTALL_DATA) $(srcdir)/$$i $(DESTDIR)$(datadir)/ss/$$i; \
	done
	$(E) "	INSTALL $(bindir)/mk_cmds"
	$(Q) $(INSTALL) mk_cmds $(DESTDIR)$(bindir)/mk_cmds
	$(E) "	INSTALL_DATA $(man1dir)/mk_cmds.1"
	$(Q) $(INSTALL_DATA) $(srcdir)/mk_cmds.1 $(DESTDIR)$(man1dir)/mk_cmds.1
	$(E) "	INSTALL_DATA $(pkgconfigdir)/ss.pc"
	$(Q) $(INSTALL_DATA) ss.pc $(DESTDIR)$(pkgconfigdir)/ss.pc

uninstall::
	$(RM) -f $(DESTDIR)$(libdir)/libss.a $(DESTDIR)$(bindir)/mk_cmds \
		$(DESTDIR)$(pkgconfigdir)/ss.pc \
		$(DESTDIR)$(man1dir)/mk_cmds.1 
	$(RM) -rf $(DESTDIR)$(includedir)/ss $(DESTDIR)$(datadir)/ss

test_ss: test_ss.o test_cmd.o $(DEPLIBSS) $(DEPLIBCOM_ERR)
	$(E) "	LD $@"
	$(Q) $(CC) -o $@ test_ss.o test_cmd.o $(ALL_CFLAGS) $(ALL_LDFLAGS) \
		$(LIBSS) $(LIBCOM_ERR) $(SYSLIBS)

fullcheck check:: all test_ss
	$(E) "	RUN TEST test_ss"
	-@($(TESTENV) ./test_ss -f $(srcdir)/test_script > test_out 2>&1; exit 0)
	$(Q) if diff test_out $(srcdir)/test_script_expected > test.diff; then \
		true ; else echo "Regression test for ss library failed!"; exit 1 ; fi

clean::
	$(RM) -f ../libss.a libss.a mk_cmds ss_err.h ss_err.c std_rqs.c \
		tst_cmds.c test_ss test_out test.diff *.o *~ \#* *.bak core \
		test_cmd.c ss.pc

mostlyclean:: clean
distclean:: clean
	$(RM) -f .depend Makefile ss.pc \
		$(srcdir)/TAGS $(srcdir)/Makefile.in.old

#
# Hack to parallel makes recognize dependencies correctly.
#
$(top_builddir)/lib/ss/ss_err.h: ss_err.h

$(OBJS): subdirs

# +++ Dependency line eater +++
# 
# Makefile dependencies follow.  This must be the last section in
# the Makefile.in file
#
invocation.o: $(srcdir)/invocation.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/ss_internal.h $(srcdir)/ss.h \
 $(top_builddir)/lib/ss/ss_err.h $(top_srcdir)/lib/et/com_err.h
help.o: $(srcdir)/help.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/ss_internal.h $(srcdir)/ss.h \
 $(top_builddir)/lib/ss/ss_err.h $(top_srcdir)/lib/et/com_err.h
execute_cmd.o: $(srcdir)/execute_cmd.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/ss_internal.h $(srcdir)/ss.h \
 $(top_builddir)/lib/ss/ss_err.h $(top_srcdir)/lib/et/com_err.h
listen.o: $(srcdir)/listen.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/ss_internal.h $(srcdir)/ss.h \
 $(top_builddir)/lib/ss/ss_err.h $(top_srcdir)/lib/et/com_err.h
parse.o: $(srcdir)/parse.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/ss_internal.h $(srcdir)/ss.h \
 $(top_builddir)/lib/ss/ss_err.h $(top_srcdir)/lib/et/com_err.h
error.o: $(srcdir)/error.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(top_srcdir)/lib/et/com_err.h \
 $(srcdir)/ss_internal.h $(srcdir)/ss.h $(top_builddir)/lib/ss/ss_err.h
prompt.o: $(srcdir)/prompt.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/ss_internal.h $(srcdir)/ss.h \
 $(top_builddir)/lib/ss/ss_err.h $(top_srcdir)/lib/et/com_err.h
request_tbl.o: $(srcdir)/request_tbl.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/ss_internal.h $(srcdir)/ss.h \
 $(top_builddir)/lib/ss/ss_err.h $(top_srcdir)/lib/et/com_err.h
list_rqs.o: $(srcdir)/list_rqs.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/ss_internal.h $(srcdir)/ss.h \
 $(top_builddir)/lib/ss/ss_err.h $(top_srcdir)/lib/et/com_err.h
pager.o: $(srcdir)/pager.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/ss_internal.h $(srcdir)/ss.h \
 $(top_builddir)/lib/ss/ss_err.h $(top_srcdir)/lib/et/com_err.h
requests.o: $(srcdir)/requests.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/ss_internal.h $(srcdir)/ss.h \
 $(top_builddir)/lib/ss/ss_err.h $(top_srcdir)/lib/et/com_err.h
data.o: $(srcdir)/data.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/ss_internal.h $(srcdir)/ss.h \
 $(top_builddir)/lib/ss/ss_err.h $(top_srcdir)/lib/et/com_err.h
get_readline.o: $(srcdir)/get_readline.c $(top_builddir)/lib/config.h \
 $(top_builddir)/lib/dirpaths.h $(srcdir)/ss_internal.h $(srcdir)/ss.h \
 $(top_builddir)/lib/ss/ss_err.h $(top_srcdir)/lib/et/com_err.h

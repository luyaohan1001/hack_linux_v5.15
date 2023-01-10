$(common-objpfx)misc/convert_scm_timestamps.os: \
 ../sysdeps/unix/sysv/linux/convert_scm_timestamps.c \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/generic/symbol-hacks.h \
 ../sysdeps/x86/bits/wordsize.h \
 ../sysdeps/unix/sysv/linux/x86/bits/timesize.h
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/libc-symver.h:
../sysdeps/generic/symbol-hacks.h:
../sysdeps/x86/bits/wordsize.h:
../sysdeps/unix/sysv/linux/x86/bits/timesize.h:

$(common-objpfx)string/rtld-rawmemchr-evex-rtm.os: \
 ../sysdeps/x86_64/multiarch/rawmemchr-evex-rtm.S \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/generic/symbol-hacks.h \
 ../sysdeps/x86_64/multiarch/memchr-evex-rtm.S \
 ../sysdeps/x86_64/multiarch/memchr-evex.S
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/libc-symver.h:
../sysdeps/generic/symbol-hacks.h:
../sysdeps/x86_64/multiarch/memchr-evex-rtm.S:
../sysdeps/x86_64/multiarch/memchr-evex.S:

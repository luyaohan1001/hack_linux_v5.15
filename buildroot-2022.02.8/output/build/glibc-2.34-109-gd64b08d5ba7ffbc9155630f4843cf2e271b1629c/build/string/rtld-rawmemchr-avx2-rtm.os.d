$(common-objpfx)string/rtld-rawmemchr-avx2-rtm.os: \
 ../sysdeps/x86_64/multiarch/rawmemchr-avx2-rtm.S \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/generic/symbol-hacks.h \
 ../sysdeps/x86_64/multiarch/memchr-avx2-rtm.S \
 ../sysdeps/x86_64/multiarch/memchr-avx2.S
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/libc-symver.h:
../sysdeps/generic/symbol-hacks.h:
../sysdeps/x86_64/multiarch/memchr-avx2-rtm.S:
../sysdeps/x86_64/multiarch/memchr-avx2.S:

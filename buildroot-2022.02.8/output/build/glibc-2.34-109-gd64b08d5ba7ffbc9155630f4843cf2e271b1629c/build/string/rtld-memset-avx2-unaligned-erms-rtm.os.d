$(common-objpfx)string/rtld-memset-avx2-unaligned-erms-rtm.os: \
 ../sysdeps/x86_64/multiarch/memset-avx2-unaligned-erms-rtm.S \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/generic/symbol-hacks.h \
 ../sysdeps/x86_64/multiarch/memset-avx2-unaligned-erms.S
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/libc-symver.h:
../sysdeps/generic/symbol-hacks.h:
../sysdeps/x86_64/multiarch/memset-avx2-unaligned-erms.S:

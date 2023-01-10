$(common-objpfx)string/rtld-stpcpy-avx2-rtm.os: \
 ../sysdeps/x86_64/multiarch/stpcpy-avx2-rtm.S \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/generic/symbol-hacks.h \
 ../sysdeps/x86_64/multiarch/strcpy-avx2-rtm.S \
 ../sysdeps/x86_64/multiarch/strcpy-avx2.S
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/libc-symver.h:
../sysdeps/generic/symbol-hacks.h:
../sysdeps/x86_64/multiarch/strcpy-avx2-rtm.S:
../sysdeps/x86_64/multiarch/strcpy-avx2.S:

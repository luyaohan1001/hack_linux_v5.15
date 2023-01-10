$(common-objpfx)stdlib/lshift.o: \
 ../sysdeps/x86_64/lshift.S \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/generic/symbol-hacks.h \
 ../sysdeps/x86_64/sysdep.h ../sysdeps/x86/sysdep.h \
 ../sysdeps/generic/sysdep.h ../sysdeps/generic/dwarf2.h \
 ../sysdeps/generic/asm-syntax.h
$(common-objpfx)libc-modules.h:
../include/libc-symbols.h:
$(common-objpfx)config.h:
../sysdeps/generic/libc-symver.h:
../sysdeps/generic/symbol-hacks.h:
../sysdeps/x86_64/sysdep.h:
../sysdeps/x86/sysdep.h:
../sysdeps/generic/sysdep.h:
../sysdeps/generic/dwarf2.h:
../sysdeps/generic/asm-syntax.h:

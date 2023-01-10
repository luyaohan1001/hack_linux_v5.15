srcdir = /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c

# Uncomment the line below if you want to do parallel build.
# PARALLELMFLAGS = -j 4

.PHONY: all install bench

all .DEFAULT:
	$(MAKE) -r PARALLELMFLAGS="$(PARALLELMFLAGS)" -C $(srcdir) objdir=`pwd` $@

install:
	LC_ALL=C; export LC_ALL; \
	$(MAKE) -r PARALLELMFLAGS="$(PARALLELMFLAGS)" -C $(srcdir) objdir=`pwd` $@

bench bench-clean bench-build:
	$(MAKE) -C $(srcdir)/benchtests $(PARALLELMFLAGS) objdir=`pwd` $@

# Convenience target to rebuild ULPs for all math tests.
regen-ulps:
	$(MAKE) -C $(srcdir)/math $(PARALLELMFLAGS) objdir=`pwd` $@

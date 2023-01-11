## Linux kernel development with QEMU emulator.

#### The kernel source fetch.

	$ git clone --depth=1 --branch v5.15 git@github.com:torvalds/linux.git

#### Configire kernel.

	$ cd kernel

	$ make ARCH=x86_64 x86_64_defconfig 

	$ make menuconfig

#### Compile kernel.

	$ make -j16

	On successful compilation of the kernel, in the log, we observe,

	Kernel: arch/x86/boot/bzImage is ready  (#1)

#### Configure buildroot for qemu on x86_64 architecture.

	$ cd buildroot-2022.02.8

	$ make qemu_x86_64_defconfig

	Now make more configurations.

	$ make menuconfig

#### Compile filesystem.

	$ make -j16

	Upon successful compilation of the rootfs, we should see following messages:

		>>>   Generating filesystem image rootfs.ext2
		>>>   Executing post-image script board/qemu/post-image.sh

#### The generated rootfs, by default is of ext2 format. We can generate a compressed rootfs by,

	$ cd buildroot-2022.02.8

	$ make menuconfig

	> Filesystem images

		> [ * ] tar the root filesystem.

	Then save. Rebuild.

	$ make 


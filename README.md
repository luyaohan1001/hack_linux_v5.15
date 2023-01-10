## Linux kernel development with QEMU emulator.

#### The kernel source fetch.

	$ git clone --depth=1 --branch v5.15 git@github.com:torvalds/linux.git

#### Configure buildroot for qemu on x86_64 architecture.

	$ cd buildroot-2022.02.8

	$ make qemu_x86_64_defconfig

	Now make more configurations.

	$ make menuconfig

#### To compile

	$ make -j16

	Upon successful compilation of the rootfs, we should see following messages:

		>>>   Generating filesystem image rootfs.ext2
		>>>   Executing post-image script board/qemu/post-image.sh


#!/usr/bin/bash

exec qemu-system-x86_64 -kernel kernel/arch/x86/boot/bzImage -boot c -m 2049M -hda buildroot-2022.02.8/output/images/rootfs.ext2 -append "root=/dev/sda rw console=ttyS0,115200 acpi=off" -serial stdio -display none

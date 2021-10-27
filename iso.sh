#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/epsilonos.kernel isodir/boot/epsilonos.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "epsilonos" {
	multiboot /boot/epsilonos.kernel
}
EOF
grub-mkrescue -o epsilonos.iso isodir

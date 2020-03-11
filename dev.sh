#!/bin/sh

FLAG="-machine raspi3 -kernel LightBleam-raspi3.img -serial stdio -show-cursor"
DEV="-usb -device usb-host,hostbus=2,hostaddr=1 -device usb-mouse -device usb-kbd"

make fclean
make TARGET=raspi3

echo ""

if [ "$1" == "" ]; then
    qemu-system-aarch64 $FLAG
    exit 0
fi

qemu-system-aarch64 $FLAG -d in_asm,int

DEFAULTTUNE = "cortexa9thf-neon"
require conf/machine/include/arm/armv7a/tune-cortexa9.inc

MACHINE_FEATURES += "usbhost jffs2 ext3 pci alsa profile"

KERNEL_IMAGETYPE = "zImage"

IMAGE_BOOT_FILES ?= " zynq-zc702.dtb zynq-zc706.dtb"
IMAGE_INSTALL:append = " kernel-devicetree kernel-image-zimage"

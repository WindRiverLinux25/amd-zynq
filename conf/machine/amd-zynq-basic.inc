DEFAULTTUNE = "cortexa9thf-neon"
require conf/machine/include/arm/armv7a/tune-cortexa9.inc

MACHINE_FEATURES += "usbhost jffs2 ext3 pci alsa profile"

IMAGE_BOOT_FILES ?= " zynq-zc702.dtb zynq-zc706.dtb zImage uImage"
IMAGE_INSTALL:append = " kernel-devicetree"

UBOOT_ENTRYPOINT  ?= "0x200000"
UBOOT_LOADADDRESS ?= "0x200000"
KERNEL_EXTRA_ARGS += "UIMAGE_LOADADDR=${UBOOT_ENTRYPOINT}"

KERNEL_IMAGETYPE ?= "uImage"
KERNEL_IMAGETYPES += "zImage"

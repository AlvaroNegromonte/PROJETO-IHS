#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const char ____versions[]
__used __section("__versions") =
	"\x14\x00\x00\x00\xd3\x21\xa9\xcd"
	"pci_iounmap\0"
	"\x1c\x00\x00\x00\x12\x2a\xe8\xd7"
	"pci_disable_device\0\0"
	"\x1c\x00\x00\x00\x9a\xf5\xa0\xda"
	"pci_release_region\0\0"
	"\x1c\x00\x00\x00\xde\xab\xd6\xc8"
	"pci_enable_device\0\0\0"
	"\x20\x00\x00\x00\x99\x4c\xfd\x8f"
	"pci_read_config_word\0\0\0\0"
	"\x20\x00\x00\x00\x0f\xe0\x7e\xe6"
	"pci_read_config_byte\0\0\0\0"
	"\x20\x00\x00\x00\xf5\x8e\x70\xeb"
	"pci_read_config_dword\0\0\0"
	"\x1c\x00\x00\x00\xb6\x64\x03\x27"
	"pci_request_region\0\0"
	"\x14\x00\x00\x00\xdc\x13\xf3\xb0"
	"pci_iomap\0\0\0"
	"\x1c\x00\x00\x00\xcb\xf6\xfd\xf0"
	"__stack_chk_fail\0\0\0\0"
	"\x20\x00\x00\x00\xa1\x8c\x87\x25"
	"__pci_register_driver\0\0\0"
	"\x1c\x00\x00\x00\x2b\x2f\xec\xe3"
	"alloc_chrdev_region\0"
	"\x18\x00\x00\x00\xa0\x04\xee\x1d"
	"class_create\0\0\0\0"
	"\x14\x00\x00\x00\x46\x53\xf8\xf5"
	"cdev_init\0\0\0"
	"\x18\x00\x00\x00\x77\x9a\x4f\x71"
	"device_create\0\0\0"
	"\x14\x00\x00\x00\x5f\x7d\x59\x63"
	"cdev_add\0\0\0\0"
	"\x1c\x00\x00\x00\xc0\xfb\xc3\x6b"
	"__unregister_chrdev\0"
	"\x20\x00\x00\x00\x97\xcd\x17\x26"
	"pci_unregister_driver\0\0\0"
	"\x18\x00\x00\x00\x43\xc9\x4f\x70"
	"class_destroy\0\0\0"
	"\x18\x00\x00\x00\x15\xec\xe5\xe8"
	"device_destroy\0\0"
	"\x14\x00\x00\x00\xea\x3c\x64\xcd"
	"cdev_del\0\0\0\0"
	"\x14\x00\x00\x00\xbb\x6d\xfb\xbd"
	"__fentry__\0\0"
	"\x10\x00\x00\x00\x7e\x3a\x2c\x12"
	"_printk\0"
	"\x1c\x00\x00\x00\xca\x39\x82\x5b"
	"__x86_return_thunk\0\0"
	"\x1c\x00\x00\x00\x48\x9f\xdb\x88"
	"__check_object_size\0"
	"\x18\x00\x00\x00\xc2\x9c\xc4\x13"
	"_copy_from_user\0"
	"\x14\x00\x00\x00\x53\x3f\x45\x4a"
	"iowrite32\0\0\0"
	"\x28\x00\x00\x00\xb3\x1c\xa2\x87"
	"__ubsan_handle_out_of_bounds\0\0\0\0"
	"\x14\x00\x00\x00\xf3\xf5\x8a\xa7"
	"ioread32\0\0\0\0"
	"\x18\x00\x00\x00\xe1\xbe\x10\x6b"
	"_copy_to_user\0\0\0"
	"\x18\x00\x00\x00\xe8\xd8\x3d\xf5"
	"module_layout\0\0\0"
	"\x00\x00\x00\x00\x00\x00\x00\x00";

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001172d00000004sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E89C873C0C0EBDCF947B542");

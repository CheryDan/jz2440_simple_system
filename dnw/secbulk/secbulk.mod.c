#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x586ddb5e, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x4c675c78, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x65345383, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x72b165e6, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x4bf6e7c4, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x7cf8b0c0, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0x76c3d8d9, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xf23651a8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4034f886, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdc6e5967, __VMLINUX_SYMBOL_STR(usb_find_interface) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3eeb2ca1, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xeeb673a6, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x98cb219f, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7E4322733046C091FB7CB3D");
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v0584p0008d0102dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B4p010Ad0102dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "430D9A805D33508CCB2BD6B");
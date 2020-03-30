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

MODULE_INFO(staging, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1076p8000d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1076p8F00d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1076p9000d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1D74p2300d*dc*dsc*dp*ic02isc02ip*in*");

MODULE_INFO(srcversion, "B88A2565B1C1063A2A4F257");

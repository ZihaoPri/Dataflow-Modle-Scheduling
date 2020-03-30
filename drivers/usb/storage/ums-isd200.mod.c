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

MODULE_ALIAS("usb:v054Cp002Bd0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp002Bd010*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0031d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0031d010*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0301d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0301d010*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0351d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0351d010*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp5701d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp5701d010*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF6pA001d0110dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF6pA001d010*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "75B1E881C5F06550E9286F4");

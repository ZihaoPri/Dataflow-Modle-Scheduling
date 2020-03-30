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
"depends=ff-memless";

MODULE_ALIAS("of:N*T*Cti,drv2604");
MODULE_ALIAS("of:N*T*Cti,drv2604C*");
MODULE_ALIAS("of:N*T*Cti,drv2604l");
MODULE_ALIAS("of:N*T*Cti,drv2604lC*");
MODULE_ALIAS("of:N*T*Cti,drv2605");
MODULE_ALIAS("of:N*T*Cti,drv2605C*");
MODULE_ALIAS("of:N*T*Cti,drv2605l");
MODULE_ALIAS("of:N*T*Cti,drv2605lC*");
MODULE_ALIAS("i2c:drv2605l");

MODULE_INFO(srcversion, "6B5B4A31F0C9D141486AD3A");

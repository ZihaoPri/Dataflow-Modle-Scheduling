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
"depends=ad5592r-base";

MODULE_ALIAS("acpi*:ADS5592:*");
MODULE_ALIAS("of:N*T*Cadi,ad5592r");
MODULE_ALIAS("of:N*T*Cadi,ad5592rC*");
MODULE_ALIAS("spi:ad5592r");

MODULE_INFO(srcversion, "F3B0713DB3CAB3734F8F5C5");

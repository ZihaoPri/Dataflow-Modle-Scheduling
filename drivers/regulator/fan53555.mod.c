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
"depends=";

MODULE_ALIAS("i2c:fan53555");
MODULE_ALIAS("i2c:syr827");
MODULE_ALIAS("i2c:syr828");
MODULE_ALIAS("of:N*T*Cfcs,fan53555");
MODULE_ALIAS("of:N*T*Cfcs,fan53555C*");
MODULE_ALIAS("of:N*T*Csilergy,syr827");
MODULE_ALIAS("of:N*T*Csilergy,syr827C*");
MODULE_ALIAS("of:N*T*Csilergy,syr828");
MODULE_ALIAS("of:N*T*Csilergy,syr828C*");

MODULE_INFO(srcversion, "D4CC21D894F236A178E177B");

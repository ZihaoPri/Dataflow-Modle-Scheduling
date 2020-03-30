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

MODULE_ALIAS("of:N*T*Clltc,ltc3589");
MODULE_ALIAS("of:N*T*Clltc,ltc3589C*");
MODULE_ALIAS("of:N*T*Clltc,ltc3589-1");
MODULE_ALIAS("of:N*T*Clltc,ltc3589-1C*");
MODULE_ALIAS("of:N*T*Clltc,ltc3589-2");
MODULE_ALIAS("of:N*T*Clltc,ltc3589-2C*");
MODULE_ALIAS("i2c:ltc3589");
MODULE_ALIAS("i2c:ltc3589-1");
MODULE_ALIAS("i2c:ltc3589-2");

MODULE_INFO(srcversion, "7C1286A7B3D9093570EC01A");

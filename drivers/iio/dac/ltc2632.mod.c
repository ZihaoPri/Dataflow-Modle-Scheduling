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
"depends=industrialio";

MODULE_ALIAS("of:N*T*Clltc,ltc2632-l12");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l12C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l10");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l10C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l8");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-l8C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h12");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h12C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h10");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h10C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h8");
MODULE_ALIAS("of:N*T*Clltc,ltc2632-h8C*");
MODULE_ALIAS("spi:ltc2632-l12");
MODULE_ALIAS("spi:ltc2632-l10");
MODULE_ALIAS("spi:ltc2632-l8");
MODULE_ALIAS("spi:ltc2632-h12");
MODULE_ALIAS("spi:ltc2632-h10");
MODULE_ALIAS("spi:ltc2632-h8");

MODULE_INFO(srcversion, "D484E411F4CE89CDE60CD69");

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
"depends=gpio-generic";

MODULE_ALIAS("acpi*:HISI0181:*");
MODULE_ALIAS("acpi*:APMC0D07:*");
MODULE_ALIAS("acpi*:APMC0D81:*");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-gpio");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-gpioC*");
MODULE_ALIAS("of:N*T*Capm,xgene-gpio-v2");
MODULE_ALIAS("of:N*T*Capm,xgene-gpio-v2C*");

MODULE_INFO(srcversion, "5942361C94D9CEC72B141A1");

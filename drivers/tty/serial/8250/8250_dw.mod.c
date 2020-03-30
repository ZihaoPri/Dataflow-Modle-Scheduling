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

MODULE_ALIAS("acpi*:INT33C4:*");
MODULE_ALIAS("acpi*:INT33C5:*");
MODULE_ALIAS("acpi*:INT3434:*");
MODULE_ALIAS("acpi*:INT3435:*");
MODULE_ALIAS("acpi*:80860F0A:*");
MODULE_ALIAS("acpi*:8086228A:*");
MODULE_ALIAS("acpi*:APMC0D08:*");
MODULE_ALIAS("acpi*:AMD0020:*");
MODULE_ALIAS("acpi*:AMDI0020:*");
MODULE_ALIAS("acpi*:BRCM2032:*");
MODULE_ALIAS("acpi*:HISI0031:*");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-uart");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-uartC*");
MODULE_ALIAS("of:N*T*Ccavium,octeon-3860-uart");
MODULE_ALIAS("of:N*T*Ccavium,octeon-3860-uartC*");

MODULE_INFO(srcversion, "8D4AF0AACB364B511CB0CCC");

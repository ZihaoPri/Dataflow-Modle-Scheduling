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

MODULE_ALIAS("acpi*:ACCE0000:*");
MODULE_ALIAS("acpi*:ACCE0001:*");
MODULE_ALIAS("acpi*:TBLT0000:*");
MODULE_ALIAS("acpi*:IPML200:*");
MODULE_ALIAS("acpi*:FNBT0000:*");

MODULE_INFO(srcversion, "F37926623F7BF9D16EAE4E2");

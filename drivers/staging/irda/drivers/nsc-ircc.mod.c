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
"depends=irda";

MODULE_ALIAS("pnp:dNSC6001*");
MODULE_ALIAS("acpi*:NSC6001:*");
MODULE_ALIAS("pnp:dHWPC224*");
MODULE_ALIAS("acpi*:HWPC224:*");
MODULE_ALIAS("pnp:dIBM0071*");
MODULE_ALIAS("acpi*:IBM0071:*");

MODULE_INFO(srcversion, "1140626DAFCC987EEA17B56");

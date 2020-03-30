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
"depends=mtd,mdio,ptp";

MODULE_ALIAS("pci:v00001924d00000803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00000813sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00000903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00001903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00000923sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00001923sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00000A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00001A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00000B03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001924d00001B03sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "57F19031152468A94CFA01A");

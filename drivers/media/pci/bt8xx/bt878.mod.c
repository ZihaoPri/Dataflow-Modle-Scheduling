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
"depends=bttv";

MODULE_ALIAS("pci:v0000109Ed00000878sv00000071sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001461sd00000761bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000011BDsd0000001Cbc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000011BDsd00000026bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001822sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv0000270Fsd0000FC00bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001461sd00000771bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000018ACsd0000DB10bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000018ACsd0000DB11bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv000018ACsd0000D500bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00007063sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000109Ed00000878sv00001822sd00000026bc*sc*i*");

MODULE_INFO(srcversion, "B758882099054197921A709");

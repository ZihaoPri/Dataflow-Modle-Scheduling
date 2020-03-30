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
"depends=i2c-algo-bit";

MODULE_ALIAS("pci:v00008086d00003577sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002562sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00003582sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002572sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d0000358Esv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002582sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002592sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002772sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d000027A2sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d000027AEsv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d000029A2sv*sd*bc03sc00i*");
MODULE_ALIAS("pci:v00008086d00002A02sv*sd*bc03sc00i*");

MODULE_INFO(srcversion, "48DE4CF472449A2AD0F5E36");

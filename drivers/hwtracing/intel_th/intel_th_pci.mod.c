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
"depends=intel_th";

MODULE_ALIAS("pci:v00008086d00009D26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A126sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A8Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A8Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A226sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000318Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A326sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DA6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000045C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008A29sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009A33sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DA6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B26sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2CDFC88D3633125A493DA89");

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

MODULE_ALIAS("pci:v00008086d00000935sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001194sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000228Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E6Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "423EF226D5915E86F77FC8E");

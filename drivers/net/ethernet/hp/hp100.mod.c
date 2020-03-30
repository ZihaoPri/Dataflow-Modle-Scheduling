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

MODULE_ALIAS("pci:v0000103Cd00001030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00001031sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00001042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00001040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F6d00000112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ad00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("eisa:sHWPF180*");
MODULE_ALIAS("eisa:sHWP1920*");
MODULE_ALIAS("eisa:sHWP1940*");
MODULE_ALIAS("eisa:sHWP1990*");
MODULE_ALIAS("eisa:sCPX0301*");
MODULE_ALIAS("eisa:sCPX0401*");

MODULE_INFO(srcversion, "453A9A198AA6DBE8B9EA116");

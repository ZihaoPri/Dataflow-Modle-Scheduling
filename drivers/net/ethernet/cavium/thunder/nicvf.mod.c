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

MODULE_ALIAS("pci:v0000177Dd0000A034sv0000177Dsd0000A134bc*sc*i*");
MODULE_ALIAS("pci:v0000177Dd00000011sv0000177Dsd0000A11Ebc*sc*i*");
MODULE_ALIAS("pci:v0000177Dd0000A034sv0000177Dsd0000A234bc*sc*i*");
MODULE_ALIAS("pci:v0000177Dd0000A034sv0000177Dsd0000A334bc*sc*i*");

MODULE_INFO(srcversion, "262F627063A1BB49970A9F3");

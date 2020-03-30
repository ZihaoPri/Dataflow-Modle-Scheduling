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
"depends=mtd,chipreg,map_funcs";

MODULE_ALIAS("pci:v00001022d00007410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007468sv00000000sd00000000bc*sc*i*");

MODULE_INFO(srcversion, "CC02557DE367B7F4682D588");

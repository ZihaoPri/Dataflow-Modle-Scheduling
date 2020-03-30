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
"depends=udc-core";

MODULE_ALIAS("pci:v000017CCd00002280sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000017CCd00002282sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010B5d00002380sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010B5d00003380sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010B5d00003382sv*sd*bc0Csc03iFE*");

MODULE_INFO(srcversion, "E09ABA9734E4375165AC78F");

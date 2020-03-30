#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uPD98402,atm";

MODULE_ALIAS("pci:v00001193d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001193d00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8BA9E8DACDFC8771AF22D2C");

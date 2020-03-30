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
"depends=hdlc";

MODULE_ALIAS("pci:v0000120Ed00000301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000120Ed00000310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8E3047FF2FD7D292BE2E6B0");

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

MODULE_ALIAS("pci:v000019A2d00000211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E228sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00000720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00000728sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D1623A588E76D553B3CEF2B");

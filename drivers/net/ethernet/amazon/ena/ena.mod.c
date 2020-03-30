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

MODULE_ALIAS("pci:v00001D0Fd00000EC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd00001EC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd0000EC20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd0000EC21sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "722F2A1FDF9CA01DACDC81E");

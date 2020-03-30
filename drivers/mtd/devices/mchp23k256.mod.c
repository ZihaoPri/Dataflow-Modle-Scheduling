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
"depends=mtd";

MODULE_ALIAS("of:N*T*Cmicrochip,mchp23k256");
MODULE_ALIAS("of:N*T*Cmicrochip,mchp23k256C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mchp23lcv1024");
MODULE_ALIAS("of:N*T*Cmicrochip,mchp23lcv1024C*");

MODULE_INFO(srcversion, "E09126027E6E362D0DCC7EE");

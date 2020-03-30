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

MODULE_ALIAS("of:N*T*Cimg,boston-lcd");
MODULE_ALIAS("of:N*T*Cimg,boston-lcdC*");
MODULE_ALIAS("of:N*T*Cmti,malta-lcd");
MODULE_ALIAS("of:N*T*Cmti,malta-lcdC*");
MODULE_ALIAS("of:N*T*Cmti,sead3-lcd");
MODULE_ALIAS("of:N*T*Cmti,sead3-lcdC*");

MODULE_INFO(srcversion, "C707E8812E5976FE1144C80");

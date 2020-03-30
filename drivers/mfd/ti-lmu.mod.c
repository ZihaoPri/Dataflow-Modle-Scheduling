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

MODULE_ALIAS("i2c:lm3532");
MODULE_ALIAS("i2c:lm3631");
MODULE_ALIAS("i2c:lm3632");
MODULE_ALIAS("i2c:lm3633");
MODULE_ALIAS("i2c:lm3695");
MODULE_ALIAS("i2c:lm3697");
MODULE_ALIAS("of:N*T*Cti,lm3532");
MODULE_ALIAS("of:N*T*Cti,lm3532C*");
MODULE_ALIAS("of:N*T*Cti,lm3631");
MODULE_ALIAS("of:N*T*Cti,lm3631C*");
MODULE_ALIAS("of:N*T*Cti,lm3632");
MODULE_ALIAS("of:N*T*Cti,lm3632C*");
MODULE_ALIAS("of:N*T*Cti,lm3633");
MODULE_ALIAS("of:N*T*Cti,lm3633C*");
MODULE_ALIAS("of:N*T*Cti,lm3695");
MODULE_ALIAS("of:N*T*Cti,lm3695C*");
MODULE_ALIAS("of:N*T*Cti,lm3697");
MODULE_ALIAS("of:N*T*Cti,lm3697C*");

MODULE_INFO(srcversion, "0B11B4110150318D808763D");

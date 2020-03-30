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

MODULE_ALIAS("of:N*T*Cnxp,sc18is602");
MODULE_ALIAS("of:N*T*Cnxp,sc18is602C*");
MODULE_ALIAS("of:N*T*Cnxp,sc18is602b");
MODULE_ALIAS("of:N*T*Cnxp,sc18is602bC*");
MODULE_ALIAS("of:N*T*Cnxp,sc18is603");
MODULE_ALIAS("of:N*T*Cnxp,sc18is603C*");
MODULE_ALIAS("i2c:sc18is602");
MODULE_ALIAS("i2c:sc18is602b");
MODULE_ALIAS("i2c:sc18is603");

MODULE_INFO(srcversion, "1AC5FD0E9D4E2F57EBCDE9E");

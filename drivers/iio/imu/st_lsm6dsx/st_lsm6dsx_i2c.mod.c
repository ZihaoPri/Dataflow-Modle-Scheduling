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
"depends=st_lsm6dsx";

MODULE_ALIAS("i2c:lsm6ds3");
MODULE_ALIAS("i2c:lsm6ds3h");
MODULE_ALIAS("i2c:lsm6dsl");
MODULE_ALIAS("i2c:lsm6dsm");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3C*");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3h");
MODULE_ALIAS("of:N*T*Cst,lsm6ds3hC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsl");
MODULE_ALIAS("of:N*T*Cst,lsm6dslC*");
MODULE_ALIAS("of:N*T*Cst,lsm6dsm");
MODULE_ALIAS("of:N*T*Cst,lsm6dsmC*");

MODULE_INFO(srcversion, "FFDFA9CED3A7F1A8F6DF014");

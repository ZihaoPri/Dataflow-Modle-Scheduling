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

MODULE_ALIAS("acpi*:BQ242500:*");
MODULE_ALIAS("acpi*:BQ242510:*");
MODULE_ALIAS("acpi*:BQ242570:*");
MODULE_ALIAS("of:N*T*Cti,bq24250");
MODULE_ALIAS("of:N*T*Cti,bq24250C*");
MODULE_ALIAS("of:N*T*Cti,bq24251");
MODULE_ALIAS("of:N*T*Cti,bq24251C*");
MODULE_ALIAS("of:N*T*Cti,bq24257");
MODULE_ALIAS("of:N*T*Cti,bq24257C*");
MODULE_ALIAS("i2c:bq24250");
MODULE_ALIAS("i2c:bq24251");
MODULE_ALIAS("i2c:bq24257");

MODULE_INFO(srcversion, "EB56D674112FFFC1FD71C6D");

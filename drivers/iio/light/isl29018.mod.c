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
"depends=industrialio";

MODULE_ALIAS("of:N*T*Cisil,isl29018");
MODULE_ALIAS("of:N*T*Cisil,isl29018C*");
MODULE_ALIAS("of:N*T*Cisil,isl29023");
MODULE_ALIAS("of:N*T*Cisil,isl29023C*");
MODULE_ALIAS("of:N*T*Cisil,isl29035");
MODULE_ALIAS("of:N*T*Cisil,isl29035C*");
MODULE_ALIAS("i2c:isl29018");
MODULE_ALIAS("i2c:isl29023");
MODULE_ALIAS("i2c:isl29035");
MODULE_ALIAS("acpi*:ISL29018:*");
MODULE_ALIAS("acpi*:ISL29023:*");
MODULE_ALIAS("acpi*:ISL29035:*");

MODULE_INFO(srcversion, "00E8AF43488BE3B79438904");

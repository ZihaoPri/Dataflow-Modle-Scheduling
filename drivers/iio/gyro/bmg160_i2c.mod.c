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
"depends=bmg160_core";

MODULE_ALIAS("i2c:bmg160");
MODULE_ALIAS("i2c:bmi055_gyro");
MODULE_ALIAS("acpi*:BMG0160:*");
MODULE_ALIAS("acpi*:BMI055B:*");

MODULE_INFO(srcversion, "F4422E326140F2EA2E85522");

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
"depends=industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("i2c:ltr501");
MODULE_ALIAS("i2c:ltr559");
MODULE_ALIAS("i2c:ltr301");
MODULE_ALIAS("acpi*:LTER0501:*");
MODULE_ALIAS("acpi*:LTER0559:*");
MODULE_ALIAS("acpi*:LTER0301:*");

MODULE_INFO(srcversion, "C41A59EE3921ABE7DE783BE");

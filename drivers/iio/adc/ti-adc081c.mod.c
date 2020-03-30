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

MODULE_ALIAS("acpi*:ADC081C:*");
MODULE_ALIAS("acpi*:ADC101C:*");
MODULE_ALIAS("acpi*:ADC121C:*");
MODULE_ALIAS("i2c:adc081c");
MODULE_ALIAS("i2c:adc101c");
MODULE_ALIAS("i2c:adc121c");

MODULE_INFO(srcversion, "87264C76A7AF335434FA49B");

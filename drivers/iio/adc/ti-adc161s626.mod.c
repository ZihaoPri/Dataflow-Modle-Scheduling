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

MODULE_ALIAS("spi:adc141s626");
MODULE_ALIAS("spi:adc161s626");
MODULE_ALIAS("of:N*T*Cti,adc141s626");
MODULE_ALIAS("of:N*T*Cti,adc141s626C*");
MODULE_ALIAS("of:N*T*Cti,adc161s626");
MODULE_ALIAS("of:N*T*Cti,adc161s626C*");

MODULE_INFO(srcversion, "BC98A6D5F3F1B57CFA19F5F");

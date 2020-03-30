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

MODULE_ALIAS("spi:adc128s052");
MODULE_ALIAS("spi:adc122s021");
MODULE_ALIAS("spi:adc124s021");
MODULE_ALIAS("of:N*T*Cti,adc128s052");
MODULE_ALIAS("of:N*T*Cti,adc128s052C*");
MODULE_ALIAS("of:N*T*Cti,adc122s021");
MODULE_ALIAS("of:N*T*Cti,adc122s021C*");
MODULE_ALIAS("of:N*T*Cti,adc124s021");
MODULE_ALIAS("of:N*T*Cti,adc124s021C*");

MODULE_INFO(srcversion, "9E6D43EC4B02D7B7AB9C2A7");

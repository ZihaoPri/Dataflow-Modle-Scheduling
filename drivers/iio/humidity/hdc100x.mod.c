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

MODULE_ALIAS("of:N*T*Cti,hdc1000");
MODULE_ALIAS("of:N*T*Cti,hdc1000C*");
MODULE_ALIAS("of:N*T*Cti,hdc1008");
MODULE_ALIAS("of:N*T*Cti,hdc1008C*");
MODULE_ALIAS("of:N*T*Cti,hdc1010");
MODULE_ALIAS("of:N*T*Cti,hdc1010C*");
MODULE_ALIAS("of:N*T*Cti,hdc1050");
MODULE_ALIAS("of:N*T*Cti,hdc1050C*");
MODULE_ALIAS("of:N*T*Cti,hdc1080");
MODULE_ALIAS("of:N*T*Cti,hdc1080C*");
MODULE_ALIAS("i2c:hdc100x");
MODULE_ALIAS("i2c:hdc1000");
MODULE_ALIAS("i2c:hdc1008");
MODULE_ALIAS("i2c:hdc1010");
MODULE_ALIAS("i2c:hdc1050");
MODULE_ALIAS("i2c:hdc1080");

MODULE_INFO(srcversion, "684D86796F99EEE0C417AC4");

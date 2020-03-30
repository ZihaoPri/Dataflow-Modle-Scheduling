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
"depends=hmc5843_core";

MODULE_ALIAS("of:N*T*Choneywell,hmc5843");
MODULE_ALIAS("of:N*T*Choneywell,hmc5843C*");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883C*");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883l");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883lC*");
MODULE_ALIAS("of:N*T*Choneywell,hmc5983");
MODULE_ALIAS("of:N*T*Choneywell,hmc5983C*");
MODULE_ALIAS("i2c:hmc5843");
MODULE_ALIAS("i2c:hmc5883");
MODULE_ALIAS("i2c:hmc5883l");
MODULE_ALIAS("i2c:hmc5983");

MODULE_INFO(srcversion, "C84C0D540C698AB88B1A405");

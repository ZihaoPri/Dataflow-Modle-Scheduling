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

MODULE_ALIAS("of:N*T*Cfsl,pfuze100");
MODULE_ALIAS("of:N*T*Cfsl,pfuze100C*");
MODULE_ALIAS("of:N*T*Cfsl,pfuze200");
MODULE_ALIAS("of:N*T*Cfsl,pfuze200C*");
MODULE_ALIAS("of:N*T*Cfsl,pfuze3000");
MODULE_ALIAS("of:N*T*Cfsl,pfuze3000C*");
MODULE_ALIAS("i2c:pfuze100");
MODULE_ALIAS("i2c:pfuze200");
MODULE_ALIAS("i2c:pfuze3000");

MODULE_INFO(srcversion, "3B2FA8AEC955DCF69A36D4E");

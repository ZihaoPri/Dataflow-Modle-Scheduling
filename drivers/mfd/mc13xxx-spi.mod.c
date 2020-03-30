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
"depends=mc13xxx-core";

MODULE_ALIAS("of:N*T*Cfsl,mc13783");
MODULE_ALIAS("of:N*T*Cfsl,mc13783C*");
MODULE_ALIAS("of:N*T*Cfsl,mc13892");
MODULE_ALIAS("of:N*T*Cfsl,mc13892C*");
MODULE_ALIAS("of:N*T*Cfsl,mc34708");
MODULE_ALIAS("of:N*T*Cfsl,mc34708C*");
MODULE_ALIAS("spi:mc13783");
MODULE_ALIAS("spi:mc13892");
MODULE_ALIAS("spi:mc34708");

MODULE_INFO(srcversion, "241F8438DEA1DCF74A23494");

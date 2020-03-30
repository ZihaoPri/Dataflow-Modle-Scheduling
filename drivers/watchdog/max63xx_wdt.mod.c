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

MODULE_ALIAS("platform:max6369_wdt");
MODULE_ALIAS("platform:max6370_wdt");
MODULE_ALIAS("platform:max6371_wdt");
MODULE_ALIAS("platform:max6372_wdt");
MODULE_ALIAS("platform:max6373_wdt");
MODULE_ALIAS("platform:max6374_wdt");

MODULE_INFO(srcversion, "DE20A4D8D51543A8038C3DF");

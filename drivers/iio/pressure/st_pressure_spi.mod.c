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
"depends=st_pressure,st_sensors_spi,industrialio";

MODULE_ALIAS("spi:lps001wp");
MODULE_ALIAS("spi:lps25h");
MODULE_ALIAS("spi:lps331ap");
MODULE_ALIAS("spi:lps22hb");
MODULE_ALIAS("spi:lps33hw");
MODULE_ALIAS("spi:lps35hw");

MODULE_INFO(srcversion, "619D390A7D768078DF91048");

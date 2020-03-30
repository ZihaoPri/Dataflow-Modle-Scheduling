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
"depends=crc8";

MODULE_ALIAS("spi:max31910");
MODULE_ALIAS("spi:max31911");
MODULE_ALIAS("spi:max31912");
MODULE_ALIAS("spi:max31913");
MODULE_ALIAS("spi:max31953");
MODULE_ALIAS("spi:max31963");

MODULE_INFO(srcversion, "1EB78B21CFCBC0B2657283B");

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
"depends=snd-soc-adau1761,snd-soc-adau17x1";

MODULE_ALIAS("spi:adau1361");
MODULE_ALIAS("spi:adau1461");
MODULE_ALIAS("spi:adau1761");
MODULE_ALIAS("spi:adau1961");

MODULE_INFO(srcversion, "01B2BBCF8438513D51C7822");

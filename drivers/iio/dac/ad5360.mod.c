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

MODULE_ALIAS("spi:ad5360");
MODULE_ALIAS("spi:ad5361");
MODULE_ALIAS("spi:ad5362");
MODULE_ALIAS("spi:ad5363");
MODULE_ALIAS("spi:ad5370");
MODULE_ALIAS("spi:ad5371");
MODULE_ALIAS("spi:ad5372");
MODULE_ALIAS("spi:ad5373");

MODULE_INFO(srcversion, "CF187B88B4C500DD17C1413");

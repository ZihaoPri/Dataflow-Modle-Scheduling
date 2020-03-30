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

MODULE_ALIAS("spi:dac082s085");
MODULE_ALIAS("spi:dac102s085");
MODULE_ALIAS("spi:dac122s085");
MODULE_ALIAS("spi:dac084s085");
MODULE_ALIAS("spi:dac104s085");
MODULE_ALIAS("spi:dac124s085");

MODULE_INFO(srcversion, "D9383C0F23317255443C7C3");

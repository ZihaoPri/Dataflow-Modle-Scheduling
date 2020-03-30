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

MODULE_ALIAS("i2c:si1132");
MODULE_ALIAS("i2c:si1141");
MODULE_ALIAS("i2c:si1142");
MODULE_ALIAS("i2c:si1143");
MODULE_ALIAS("i2c:si1145");
MODULE_ALIAS("i2c:si1146");
MODULE_ALIAS("i2c:si1147");

MODULE_INFO(srcversion, "96227ACFCE0C4D1771B6FB2");

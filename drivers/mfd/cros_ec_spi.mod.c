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
"depends=cros_ec_core";

MODULE_ALIAS("spi:cros-ec-spi");
MODULE_ALIAS("of:N*T*Cgoogle,cros-ec-spi");
MODULE_ALIAS("of:N*T*Cgoogle,cros-ec-spiC*");

MODULE_INFO(srcversion, "9279FD127B8DE88432435D8");

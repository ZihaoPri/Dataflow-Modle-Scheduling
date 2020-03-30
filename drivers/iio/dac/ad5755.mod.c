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

MODULE_ALIAS("of:N*T*Cadi,ad5755");
MODULE_ALIAS("of:N*T*Cadi,ad5755C*");
MODULE_ALIAS("of:N*T*Cadi,ad5755-1");
MODULE_ALIAS("of:N*T*Cadi,ad5755-1C*");
MODULE_ALIAS("of:N*T*Cadi,ad5757");
MODULE_ALIAS("of:N*T*Cadi,ad5757C*");
MODULE_ALIAS("of:N*T*Cadi,ad5735");
MODULE_ALIAS("of:N*T*Cadi,ad5735C*");
MODULE_ALIAS("of:N*T*Cadi,ad5737");
MODULE_ALIAS("of:N*T*Cadi,ad5737C*");
MODULE_ALIAS("spi:ad5755");
MODULE_ALIAS("spi:ad5755-1");
MODULE_ALIAS("spi:ad5757");
MODULE_ALIAS("spi:ad5735");
MODULE_ALIAS("spi:ad5737");

MODULE_INFO(srcversion, "EFBD83B984EB64F86E508D3");

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

MODULE_ALIAS("of:N*T*Cmicrel,ks8995");
MODULE_ALIAS("of:N*T*Cmicrel,ks8995C*");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8864");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8864C*");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8795");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8795C*");
MODULE_ALIAS("spi:ks8995");
MODULE_ALIAS("spi:ksz8864");
MODULE_ALIAS("spi:ksz8795");

MODULE_INFO(srcversion, "54C0A65D833C3674828A4ED");

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

MODULE_ALIAS("of:N*T*Camstaos,tsl2560");
MODULE_ALIAS("of:N*T*Camstaos,tsl2560C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2561");
MODULE_ALIAS("of:N*T*Camstaos,tsl2561C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2562");
MODULE_ALIAS("of:N*T*Camstaos,tsl2562C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2563");
MODULE_ALIAS("of:N*T*Camstaos,tsl2563C*");
MODULE_ALIAS("i2c:tsl2560");
MODULE_ALIAS("i2c:tsl2561");
MODULE_ALIAS("i2c:tsl2562");
MODULE_ALIAS("i2c:tsl2563");

MODULE_INFO(srcversion, "252EEAEC8495D9D3D7F2269");

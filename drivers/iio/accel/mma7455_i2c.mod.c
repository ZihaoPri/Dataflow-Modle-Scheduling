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
"depends=mma7455_core";

MODULE_ALIAS("of:N*T*Cfsl,mma7455");
MODULE_ALIAS("of:N*T*Cfsl,mma7455C*");
MODULE_ALIAS("of:N*T*Cfsl,mma7456");
MODULE_ALIAS("of:N*T*Cfsl,mma7456C*");
MODULE_ALIAS("i2c:mma7455");
MODULE_ALIAS("i2c:mma7456");

MODULE_INFO(srcversion, "A7E50EF8BD671FBE7D1A02C");

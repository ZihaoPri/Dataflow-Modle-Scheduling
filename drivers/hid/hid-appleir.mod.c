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
"depends=hid";

MODULE_ALIAS("hid:b0003g*v000005ACp00008240");
MODULE_ALIAS("hid:b0003g*v000005ACp00001440");
MODULE_ALIAS("hid:b0003g*v000005ACp00008241");
MODULE_ALIAS("hid:b0003g*v000005ACp00008242");
MODULE_ALIAS("hid:b0003g*v000005ACp00008243");

MODULE_INFO(srcversion, "97D4E8CC94DB407C9A67432");
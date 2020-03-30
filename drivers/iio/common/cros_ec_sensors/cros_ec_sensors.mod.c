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
"depends=cros_ec_sensors_core,industrialio,industrialio-triggered-buffer";

MODULE_ALIAS("platform:cros-ec-accel");
MODULE_ALIAS("platform:cros-ec-gyro");
MODULE_ALIAS("platform:cros-ec-mag");

MODULE_INFO(srcversion, "7E542472DE2ACD05E9D36C7");

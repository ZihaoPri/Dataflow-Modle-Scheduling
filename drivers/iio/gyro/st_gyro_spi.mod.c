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
"depends=st_gyro,st_sensors_spi,industrialio";

MODULE_ALIAS("spi:l3g4200d");
MODULE_ALIAS("spi:lsm330d_gyro");
MODULE_ALIAS("spi:lsm330dl_gyro");
MODULE_ALIAS("spi:lsm330dlc_gyro");
MODULE_ALIAS("spi:l3gd20");
MODULE_ALIAS("spi:l3gd20h");
MODULE_ALIAS("spi:l3g4is_ui");
MODULE_ALIAS("spi:lsm330_gyro");
MODULE_ALIAS("spi:lsm9ds0_gyro");

MODULE_INFO(srcversion, "657B08D9C6F99B8F81E5F64");

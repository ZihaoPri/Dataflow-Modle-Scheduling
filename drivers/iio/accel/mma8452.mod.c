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

MODULE_ALIAS("i2c:mma8451");
MODULE_ALIAS("i2c:mma8452");
MODULE_ALIAS("i2c:mma8453");
MODULE_ALIAS("i2c:mma8652");
MODULE_ALIAS("i2c:mma8653");
MODULE_ALIAS("i2c:fxls8471");
MODULE_ALIAS("of:N*T*Cfsl,mma8451");
MODULE_ALIAS("of:N*T*Cfsl,mma8451C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8452");
MODULE_ALIAS("of:N*T*Cfsl,mma8452C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8453");
MODULE_ALIAS("of:N*T*Cfsl,mma8453C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8652");
MODULE_ALIAS("of:N*T*Cfsl,mma8652C*");
MODULE_ALIAS("of:N*T*Cfsl,mma8653");
MODULE_ALIAS("of:N*T*Cfsl,mma8653C*");
MODULE_ALIAS("of:N*T*Cfsl,fxls8471");
MODULE_ALIAS("of:N*T*Cfsl,fxls8471C*");

MODULE_INFO(srcversion, "94864A8CE534FFF218BDAF1");

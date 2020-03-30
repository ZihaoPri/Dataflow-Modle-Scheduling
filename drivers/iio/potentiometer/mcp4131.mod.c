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

MODULE_ALIAS("spi:mcp4131-502");
MODULE_ALIAS("spi:mcp4131-103");
MODULE_ALIAS("spi:mcp4131-503");
MODULE_ALIAS("spi:mcp4131-104");
MODULE_ALIAS("spi:mcp4132-502");
MODULE_ALIAS("spi:mcp4132-103");
MODULE_ALIAS("spi:mcp4132-503");
MODULE_ALIAS("spi:mcp4132-104");
MODULE_ALIAS("spi:mcp4141-502");
MODULE_ALIAS("spi:mcp4141-103");
MODULE_ALIAS("spi:mcp4141-503");
MODULE_ALIAS("spi:mcp4141-104");
MODULE_ALIAS("spi:mcp4142-502");
MODULE_ALIAS("spi:mcp4142-103");
MODULE_ALIAS("spi:mcp4142-503");
MODULE_ALIAS("spi:mcp4142-104");
MODULE_ALIAS("spi:mcp4151-502");
MODULE_ALIAS("spi:mcp4151-103");
MODULE_ALIAS("spi:mcp4151-503");
MODULE_ALIAS("spi:mcp4151-104");
MODULE_ALIAS("spi:mcp4152-502");
MODULE_ALIAS("spi:mcp4152-103");
MODULE_ALIAS("spi:mcp4152-503");
MODULE_ALIAS("spi:mcp4152-104");
MODULE_ALIAS("spi:mcp4161-502");
MODULE_ALIAS("spi:mcp4161-103");
MODULE_ALIAS("spi:mcp4161-503");
MODULE_ALIAS("spi:mcp4161-104");
MODULE_ALIAS("spi:mcp4162-502");
MODULE_ALIAS("spi:mcp4162-103");
MODULE_ALIAS("spi:mcp4162-503");
MODULE_ALIAS("spi:mcp4162-104");
MODULE_ALIAS("spi:mcp4231-502");
MODULE_ALIAS("spi:mcp4231-103");
MODULE_ALIAS("spi:mcp4231-503");
MODULE_ALIAS("spi:mcp4231-104");
MODULE_ALIAS("spi:mcp4232-502");
MODULE_ALIAS("spi:mcp4232-103");
MODULE_ALIAS("spi:mcp4232-503");
MODULE_ALIAS("spi:mcp4232-104");
MODULE_ALIAS("spi:mcp4241-502");
MODULE_ALIAS("spi:mcp4241-103");
MODULE_ALIAS("spi:mcp4241-503");
MODULE_ALIAS("spi:mcp4241-104");
MODULE_ALIAS("spi:mcp4242-502");
MODULE_ALIAS("spi:mcp4242-103");
MODULE_ALIAS("spi:mcp4242-503");
MODULE_ALIAS("spi:mcp4242-104");
MODULE_ALIAS("spi:mcp4251-502");
MODULE_ALIAS("spi:mcp4251-103");
MODULE_ALIAS("spi:mcp4251-503");
MODULE_ALIAS("spi:mcp4251-104");
MODULE_ALIAS("spi:mcp4252-502");
MODULE_ALIAS("spi:mcp4252-103");
MODULE_ALIAS("spi:mcp4252-503");
MODULE_ALIAS("spi:mcp4252-104");
MODULE_ALIAS("spi:mcp4261-502");
MODULE_ALIAS("spi:mcp4261-103");
MODULE_ALIAS("spi:mcp4261-503");
MODULE_ALIAS("spi:mcp4261-104");
MODULE_ALIAS("spi:mcp4262-502");
MODULE_ALIAS("spi:mcp4262-103");
MODULE_ALIAS("spi:mcp4262-503");
MODULE_ALIAS("spi:mcp4262-104");

MODULE_INFO(srcversion, "1C03A1F161A38604DD28B6C");

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
"depends=sdhci,sdhci-pltfm";

MODULE_ALIAS("of:N*T*Cmarvell,armada-ap806-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-ap806-sdhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-cp110-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-cp110-sdhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-3700-sdhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-3700-sdhciC*");

MODULE_INFO(srcversion, "336F48B8B3C3A1894C2E7ED");

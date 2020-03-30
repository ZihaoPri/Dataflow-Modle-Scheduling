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

MODULE_ALIAS("of:N*T*Cqcom,pm8841-regulators");
MODULE_ALIAS("of:N*T*Cqcom,pm8841-regulatorsC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8916-regulators");
MODULE_ALIAS("of:N*T*Cqcom,pm8916-regulatorsC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8941-regulators");
MODULE_ALIAS("of:N*T*Cqcom,pm8941-regulatorsC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8994-regulators");
MODULE_ALIAS("of:N*T*Cqcom,pm8994-regulatorsC*");
MODULE_ALIAS("of:N*T*Cqcom,pmi8994-regulators");
MODULE_ALIAS("of:N*T*Cqcom,pmi8994-regulatorsC*");

MODULE_INFO(srcversion, "AFB3AD3D606AA88F693F854");

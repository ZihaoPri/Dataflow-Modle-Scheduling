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

MODULE_ALIAS("acpi*:ELAN0000:*");
MODULE_ALIAS("acpi*:ELAN0100:*");
MODULE_ALIAS("acpi*:ELAN0600:*");
MODULE_ALIAS("acpi*:ELAN0601:*");
MODULE_ALIAS("acpi*:ELAN0602:*");
MODULE_ALIAS("acpi*:ELAN0603:*");
MODULE_ALIAS("acpi*:ELAN0604:*");
MODULE_ALIAS("acpi*:ELAN0605:*");
MODULE_ALIAS("acpi*:ELAN0606:*");
MODULE_ALIAS("acpi*:ELAN0607:*");
MODULE_ALIAS("acpi*:ELAN0608:*");
MODULE_ALIAS("acpi*:ELAN0609:*");
MODULE_ALIAS("acpi*:ELAN060B:*");
MODULE_ALIAS("acpi*:ELAN060C:*");
MODULE_ALIAS("acpi*:ELAN060F:*");
MODULE_ALIAS("acpi*:ELAN0610:*");
MODULE_ALIAS("acpi*:ELAN0611:*");
MODULE_ALIAS("acpi*:ELAN0612:*");
MODULE_ALIAS("acpi*:ELAN0615:*");
MODULE_ALIAS("acpi*:ELAN0616:*");
MODULE_ALIAS("acpi*:ELAN0617:*");
MODULE_ALIAS("acpi*:ELAN0618:*");
MODULE_ALIAS("acpi*:ELAN0619:*");
MODULE_ALIAS("acpi*:ELAN061A:*");
MODULE_ALIAS("acpi*:ELAN061C:*");
MODULE_ALIAS("acpi*:ELAN061D:*");
MODULE_ALIAS("acpi*:ELAN061E:*");
MODULE_ALIAS("acpi*:ELAN061F:*");
MODULE_ALIAS("acpi*:ELAN0620:*");
MODULE_ALIAS("acpi*:ELAN0621:*");
MODULE_ALIAS("acpi*:ELAN0622:*");
MODULE_ALIAS("acpi*:ELAN0623:*");
MODULE_ALIAS("acpi*:ELAN0624:*");
MODULE_ALIAS("acpi*:ELAN0625:*");
MODULE_ALIAS("acpi*:ELAN0626:*");
MODULE_ALIAS("acpi*:ELAN0627:*");
MODULE_ALIAS("acpi*:ELAN0628:*");
MODULE_ALIAS("acpi*:ELAN0629:*");
MODULE_ALIAS("acpi*:ELAN062A:*");
MODULE_ALIAS("acpi*:ELAN062B:*");
MODULE_ALIAS("acpi*:ELAN062C:*");
MODULE_ALIAS("acpi*:ELAN062D:*");
MODULE_ALIAS("acpi*:ELAN0631:*");
MODULE_ALIAS("acpi*:ELAN0632:*");
MODULE_ALIAS("acpi*:ELAN1000:*");
MODULE_ALIAS("i2c:elan_i2c");

MODULE_INFO(srcversion, "8C3F84B0CF21410729BA9E3");

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

MODULE_INFO(staging, "Y");

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pci,comedi_8255,comedi";

MODULE_ALIAS("pci:v0000144Ad00007224sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Ad00007248sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Ad00007296sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000000Bsv00000000sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000000Bsv00001307sd0000000Bbc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00000160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001630sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000013C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00000400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000017D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3D83B424DE65A20274451F3");

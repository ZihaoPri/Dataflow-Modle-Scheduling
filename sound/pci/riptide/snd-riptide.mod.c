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
"depends=snd-pcm,snd-opl3-lib,snd-mpu401-uart,snd,gameport,snd-ac97-codec";

MODULE_ALIAS("pci:v0000127Ad00004310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00004330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00004340sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "418B133E6DE1E67558D4390");

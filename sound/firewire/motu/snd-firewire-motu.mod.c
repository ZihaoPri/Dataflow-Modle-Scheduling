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
"depends=firewire-core,snd-firewire-lib,snd-pcm,snd,snd-rawmidi,snd-hwdep";

MODULE_ALIAS("ieee1394:ven000001F2mo00101800sp000001F2ver*");
MODULE_ALIAS("ieee1394:ven000001F2mo00106800sp000001F2ver*");
MODULE_ALIAS("ieee1394:ven000001F2mo00100800sp000001F2ver*");
MODULE_ALIAS("ieee1394:ven000001F2mo00104800sp000001F2ver*");

MODULE_INFO(srcversion, "4DDC8C43F5B2D3E4A0845E5");

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
"depends=pcmcia";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa53CB94F9pbBFDF89A5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6271EFA3pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2054E8DEpb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54A33665pb*pc*pd*");

MODULE_INFO(srcversion, "0440148B7CE60BD5EEEAE51");

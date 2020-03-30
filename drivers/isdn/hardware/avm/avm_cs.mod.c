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
"depends=pcmcia,b1pcmcia";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa95D42008pb845DC335pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa95D42008pb81E10430pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa95D42008pb18E8558Apc*pd*");

MODULE_INFO(srcversion, "1B9F3A1E6F8139264737AF8");

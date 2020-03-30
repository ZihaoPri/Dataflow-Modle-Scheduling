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

MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bBD*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bBL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bHL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bKL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bSL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cAL*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cBL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cBW6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bIP2*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bIP6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cHL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*ETXexpress-SCT2*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*ETXe-SCT2*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bSC2*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*ETXexpress-SCT6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*ETXe-SCT6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bSC6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cKL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*ETXexpress-PC*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-bPC2*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*PXT*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cSL6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cBT*:");
MODULE_ALIAS("dmi*:bvr*FRI2*:rvn*Kontron*:");
MODULE_ALIAS("dmi*:pn*FishRiverIslandII*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-mAL10*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*ETX-OH*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-mBT*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*nanoETXexpress-TT*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*nETXe-TT*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-mTT*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-mCT*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*microETXexpress-DC*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cDC2*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*microETXexpress-PC*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cPC2*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cCT6*:");
MODULE_ALIAS("dmi*:rvn*Kontron*:rn*COMe-cTH6*:");

MODULE_INFO(srcversion, "874F25242262D729DAD234C");

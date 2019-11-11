#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("pci:v000010ECd0000C821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000C82Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000C82Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EE2A0A1FA1A6E0F37895EDA");

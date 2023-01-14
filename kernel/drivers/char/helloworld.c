#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Luyao Han ");
MODULE_DESCRIPTION("A simple Hello-world kernel module.!");

static int __init init_routine(void)
{
	pr_info("hello-world module loaded.\n");
	return 0;
}

static void __exit exit_routine(void)
{
	pr_info("hello world unloaded.\n");
}

module_init(init_routine);
module_exit(exit_routine);

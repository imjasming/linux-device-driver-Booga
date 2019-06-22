#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

static int init() {
	printk(KERN_ALERT "Hello world!\n");
	return 0;
}

static void exit() {
	printk(KERN_ALERT "exit");
}

module_init(init);
module_exit(exit);
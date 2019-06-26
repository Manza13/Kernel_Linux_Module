#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init unanzacorestart(void){
	printk(KERN_ALERT "Starting Core0xF0013");
	printk(KERN_ALERT "THANK YOU FOR INSTALLING THIS MODULE, NOW WE HAVE ACCESS TO YOUR PC");
	return 0;
}

static void __exit unanzacorecleanup(void){
	printk(KERN_ALERT "Cleaning Core0xF0013");
}

module_init(unanzacorestart);
module_exit(unanzacorecleanup);

MODULE_LICENSE("GLP");
MODULE_AUTHOR("MANZA");
MODULE_DESCRIPTION("VERSION: 0.1 -- THIS MODULE HAVE MALWARE");


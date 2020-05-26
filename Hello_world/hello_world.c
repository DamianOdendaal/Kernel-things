#include <linux/modlue.h>          
#include <linux/kernel.h>            
#include <linux/init.h>

static int __init hello_world(void)    
{
    printk(KERN_INFO "Hello world, its Mr Dodo here\n"); 
    return 0;
}

static void __exit goodbye_world(void) 
{
    printk(KERN_INFO "Goodbye world!, Mr Dodo is leaving\n");
}

module_init(hello_world);
module_exit(goodbye_world);

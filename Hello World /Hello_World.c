#include <linux/modlue.h>           // this provides all the module definitions i will need in module  
#include <linux/kernel.h>           // this provides the core functions you will find in the kernel  
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

// continue watching from 10:02 on  https://www.youtube.com/watch?v=U5G_rT-GwPE
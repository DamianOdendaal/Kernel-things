#include <linux/modlue.h>           // this provides all the module definitions i will need in module  
#include <linux/kernel.h>           // this provides the core functions you will find in the kernel  
#include <linux/init.h>

static int __init hello_world(void)
{
    printk(KERN_INFO "Hello world, its Mr Dodo here\n");
    return 0;
}
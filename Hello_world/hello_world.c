#include <linux/modlue.h>           // this provides all the module definitions i will need in module , also to recognise that it is a module
#include <linux/kernel.h>           // this provides the core functions you will find in the kernel  
#include <linux/init.h>

static int __init hello_world(void)     // the method needs to be static because there must only be one instance of it.
{
    printk(KERN_INFO "Hello world, its Mr Dodo here\n");        // instead of printf for print to file we use printk to print to a log file which can be displayed by using dmesg to view log files 
    return 0;
}

static void __exit goodbye_world(void)      // this is to deallocate resources that we have used
{
    printk(KERN_INFO "Goodbye world!, Mr Dodo is leaving\n");
}

module_init(hello_world);
module_exit(goodbye_world);
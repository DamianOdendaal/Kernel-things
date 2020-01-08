# Kernel-things
Time to discover what Kernels has for us to learn 


Before you start you will need to install the required headers that will be used to perform the tasks that will be demonstrated, the command is

>> sudo apt-get install linux-headers- `uname -r`



when trying to insert the module into the kernel you will need to do the following

1.) run Make all

2.) look for a file that has the ko (Kernel Object) extention

3.) then use Insmod followed by the file to insert the module into the kernel

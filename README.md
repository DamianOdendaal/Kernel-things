Time to discover what the kernel world has for us to learn

Before you start you will need to install the required headers that will be used to be able to see what these projects have waiting for you

>> sudo apt-get install linux headers -uname -r 

when trying to insert a kernel module into the kernel you will need to do the following

1.) run make so that the required files may be built
2.) use insmod to insert the file that has the .ko (kernel object) extention

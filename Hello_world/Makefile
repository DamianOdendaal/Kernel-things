object-m += Hello_World.o

KDIR = /usr/src/linux-headers-3.2.0-24-generic-pae			# for the last part you can say uname -r then with the result you can say ls /usr.src then look for the linux header that was most similar to your prev result

all:
	$(MAKE) -C $(KDIR) SUBDIRS =$(PWD) modules

clean:
	rm -rf *.o *.ko *.mod *.symvers *.order
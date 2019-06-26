obj-m += Core0xF0013.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=${shell pwd} modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=${shell pwd} clean

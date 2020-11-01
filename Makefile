#
#   Makefile for libcalceph
#

.PHONY: all

all:
ifeq ($(OS_TARGET),win32)
	$(MAKE) -C calceph -f Makefile.win32 all
 else
 ifeq ($(OS_TARGET),win64)
	$(MAKE) -C calceph -f Makefile.win64 all
 else
 ifeq ($(CPU_TARGET),i386)
	$(MAKE) -C calceph all arch_flags=-m32
 else
 ifeq ($(CPU_TARGET),x86_64)
	$(MAKE) -C calceph all arch_flags=-m64
 else
	$(MAKE) -C calceph all
 endif
 endif
 endif
endif

clean:
ifeq ($(OS_TARGET),win32)
        $(MAKE) -C calceph -f Makefile.win32 clean
else
ifeq ($(OS_TARGET),win64)
        $(MAKE) -C calceph -f Makefile.win64 clean
else
	$(MAKE) -C calceph clean
endif
endif

install: 
	./install.sh $(PREFIX) $(CPU_TARGET)

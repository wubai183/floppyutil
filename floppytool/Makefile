DEBUG_FLAG = @
CP         = $(DEBUG_FLAG) cp
RM         = $(DEBUG_FLAG) rm
YASM       = $(DEBUG_FLAG) yasm
YASM_BIN   = $(YASM) -fbin --objext=bin
YASM_SYS   = $(YASM) -fbin --objext=sys

INSTALL_DIR = D:\

all:floppytool.exe

floppytool.exe : floppytool.o

floppytool.o: floppytool.c

clean:
	echo "...."
	
commit:clean
	git add .
	git commit -a
	
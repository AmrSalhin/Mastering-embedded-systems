#learn-in-depth
# arm926ej-s MAKEFILE
# ENG/ AMR AHMED

CC=arm-none-eabi-
CFLAGS=-g  -mcpu=arm926ej-s
INCS=-I .
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
PROJECTNAME=learn-in-depth

%.o: %.c
		$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@


%.o: %.s
	 $(CC)as.exe $< -o $@

$(PROJECTNAME).elf: $(OBJ) $(ASOBJ)
	 $(CC)ld.exe -T linker_script.ld $(OBJ) $(ASOBJ) -o $@


$(PROJECTNAME).bin: $(PROJECTNAME).elf
	 $(CC)objcopy.exe -O binary $< $@
 
 clearall: 
		rm *.bin *.elf *.o
	





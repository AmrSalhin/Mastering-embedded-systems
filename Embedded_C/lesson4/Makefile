#learn-in-depth
# cortex-m3 MAKEFILE
# ENG/ AMR AHMED

CC=arm-none-eabi-
CFLAGS=-g  -mcpu=cortex-M4 -g
INCS=-I .
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
PROJECTNAME=unit3-lab4-cortexM4

$(PROJECTNAME).bin: $(PROJECTNAME).elf
	 $(CC)objcopy.exe -O binary $< $@
	 @echo "====================Bulid Done=================="

%.o: %.c
		$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@


%.o: %.s
	 $(CC)as.exe $< -o $@

$(PROJECTNAME).elf: $(OBJ) $(ASOBJ)
	 $(CC)ld.exe -T linker_script.ld $(OBJ) $(ASOBJ) -o $@ -Map=Map_file.map
	 cp $(PROJECTNAME).elf $(PROJECTNAME).axf



 
 clearall: 
		rm *.bin *.elf *.o
	





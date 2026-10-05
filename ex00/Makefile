MCU		= atmega328p
F_CPU	= 16000000UL
CC		= avr-gcc
OBJCOPY	= avr-objcopy
AVRDUDE	= avrdude

CFLAGS	= -Wall -Os -mmcu=$(MCU) -DF_CPU=$(F_CPU) -I./

PROGRAMMER	= arduino
PORT	= /dev/ttyUSB0
BAUD	= 115200

TARGET = main

# OBJ = ${TARGET}.o

all: hex flash

hex: $(TARGET).hex

$(TARGET).hex: $(TARGET).bin
	$(OBJCOPY) -O ihex -R .eeprom $< $@

# $(TARGET).elf: $(TARGET).bin
# 	$(CC) $(CFLAGS) $< -o $@

$(TARGET).bin: $(TARGET).c
	$(CC) $(CFLAGS) -c -o main.bin main.c

flash: hex
	$(AVRDUDE) -c $(PROGRAMMER) -p $(MCU) -P $(PORT) -b $(BAUD) -U flash:w:$(TARGET).hex:i

re: clean all

clean:
	rm -f *.o *.bin *.hex

MCU		= atmega328p
F_CPU	= 16000000UL
CC		= avr-gcc
OBJCOPY	= avr-objcopy
AVRDUDE	= avrdude

CFLAGS	= -Wall -Os -mmcu=$(MCU) -DF_CPU=$(F_CPU)

PROGRAMMER	= arduino
PORT	= /dev/ttyUSB0
BAUD	= 115200

TARGET = main

all: hex flash

hex: 
	$(CC) $(CFLAGS) -c -o $(TARGET).bin $(TARGET).c
	$(OBJCOPY) -O ihex -R .eeprom $(TARGET).bin $(TARGET).hex

flash: 
	$(AVRDUDE) -c $(PROGRAMMER) -p $(MCU) -P $(PORT) -b $(BAUD) -U flash:w:$(TARGET).hex:i

re: clean all

clean:
	rm -f *.o *.bin *.hex 

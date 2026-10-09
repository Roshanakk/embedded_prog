MCU		= atmega328p
F_CPU	= 16000000UL
CC		= avr-gcc
OBJCOPY	= avr-objcopy
AVRDUDE	= avrdude

CFLAGS	= -Wall 

PROGRAMMER	= arduino
PORT	= /dev/ttyUSB0
BAUD	= 115200

TARGET = main

all: hex flash

hex: 
	$(CC) -g -mmcu=$(MCU) -DF_CPU=$(F_CPU) -Os $(CFLAGS) $(TARGET).c -o $(TARGET).bin 
	$(OBJCOPY) -O ihex $(TARGET).bin $(TARGET).hex

flash: 
	$(AVRDUDE) -c $(PROGRAMMER) -p $(MCU) -P $(PORT) -b $(BAUD) -U flash:w:$(TARGET).hex:i

re: clean all

clean:
	rm -f *.o *.bin *.hex 
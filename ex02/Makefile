# MCU     = atmega328p
# F_CPU   = 16000000UL
# CC      = avr-gcc
# OBJCOPY = avr-objcopy
# AVRDUDE = avrdude

# CFLAGS  = -Wall -Os -mmcu=$(MCU) -DF_CPU=$(F_CPU)

# PROGRAMMER = arduino
# PORT       = /dev/ttyUSB0
# BAUD       = 115200

# TARGET = main


# all: hex flash


# $(TARGET).bin: $(TARGET).c
# 	$(CC) $(CFLAGS) -c -o main.bin main.c


# %.elf: $(TARGET).bin
# 	$(CC) $(CFLAGS) $< -o $@

# %.hex: $(TARGET).elf
# 	$(OBJCOPY) -O ihex -R .eeprom $< $@

# hex: $(TARGET).hex

# flash: $(TARGET).hex
# 	$(AVRDUDE) -c $(PROGRAMMER) -p $(MCU) -P $(PORT) -b $(BAUD) -U flash:w:$(TARGET).hex:i

# clean:
# 	rm -f *.o *.hex *.bin

	

# MCU		= atmega328p
# F_CPU	= 16000000UL
# CC		= avr-gcc
# OBJCOPY	= avr-objcopy
# AVRDUDE	= avrdude

# CFLAGS	= -Wall -Os -mmcu=$(MCU) -DF_CPU=$(F_CPU) -I./

# PROGRAMMER	= arduino
# PORT	= /dev/ttyUSB0
# BAUD	= 115200

# TARGET = main

# all: hex flash

# hex: $(TARGET).hex

# $(TARGET).hex: $(TARGET).bin
# 	$(OBJCOPY) -O ihex -R .eeprom $< $@

# $(TARGET).bin: $(TARGET).c
# 	$(CC) $(CFLAGS) -c -o main.bin main.c

# flash: hex
# 	$(AVRDUDE) -c $(PROGRAMMER) -p $(MCU) -P $(PORT) -b $(BAUD) -U flash:w:$(TARGET).hex:i

# re: clean all

# clean:
# 	rm -f *.o *.bin *.hex


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

all: hex

hex: $(TARGET).hex

$(TARGET).hex: $(TARGET).bin
	$(OBJCOPY) -O ihex -R .eeprom $< $@

$(TARGET).bin: $(TARGET).c
	$(CC) $(CFLAGS) -c -o main.bin main.c

flash: hex
	$(AVRDUDE) -c $(PROGRAMMER) -p $(MCU) -P $(PORT) -b $(BAUD) -U flash:w:$(TARGET).hex:i

re: clean all

clean:
	rm -f *.o *.bin *.hex


# -O binary avec avr objcopy
#avr-gcc pour compiler un fichier source, 
#avr-objcopy pour créer un fichier hexadécimal, 
#et avrdude pour flasher le périphérique. 
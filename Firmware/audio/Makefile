# Makefile for STM32G081 w/ HAL
# 09-23-2021 E. Brombaugh

# sub directories
VPATH = .:../CMSIS:../HAL:../common

# Object files
OBJECTS =   startup_stm32g081xx.o system_stm32g0xx.o main.o printf.o usart.o \
			audio.o adc.o i2s.o shared_i2c.o oled.o timersleep.o \
			widget.o \
			stm32g0xx_hal.o stm32g0xx_hal_cortex.o stm32g0xx_hal_rcc.o \
			stm32g0xx_hal_rcc_ex.o stm32g0xx_ll_rcc.o stm32g0xx_hal_pwr.o \
			stm32g0xx_hal_pwr_ex.o stm32g0xx_hal_gpio.o stm32g0xx_hal_uart.o \
			stm32g0xx_hal_uart_ex.o stm32g0xx_hal_adc.o stm32g0xx_hal_dac.o \
			stm32g0xx_hal_dma.o stm32g0xx_hal_tim.o stm32g0xx_hal_tim_ex.o \
			stm32g0xx_hal_i2s.o stm32g0xx_hal_i2c.o stm32g0xx_hal_i2c_ex.o
			
# Linker script
LDSCRIPT = STM32G081KBTx_FLASH.ld

# Compiler Flags
CFLAGS  = -Og -g -ffunction-sections -std=gnu99 -Wall -flto
CFLAGS += -I. -I../CMSIS -I../HAL -I../common
CFLAGS += -DARM_MATH_CM0 -DUSE_HAL_DRIVER -DSTM32G081xx
CFLAGS += -mlittle-endian -mthumb -mcpu=cortex-m0plus 
AFLAGS  = -mlittle-endian -mthumb -mcpu=cortex-m0plus
LFLAGS  = $(CFLAGS) -nostartfiles -T $(LDSCRIPT) -Wl,-Map=main.map
LFLAGS += -Wl,--gc-sections -Wl,--print-memory-usage
LFLAGS += --specs=nano.specs
CPFLAGS = --output-target=binary
ODFLAGS	= -x --syms

# Executables
#ARCH = arm-none-eabi
ARCH = /opt/launchpad/gcc-arm-none-eabi-7-2018-q2-update/bin/arm-none-eabi
CC = $(ARCH)-gcc
LD = $(ARCH)-ld -v
AS = $(ARCH)-as
OBJCPY = $(ARCH)-objcopy
OBJDMP = $(ARCH)-objdump
GDB = $(ARCH)-gdb
NM = $(ARCH)-nm
OPENOCD = openocd
DFU = dfu-util

CPFLAGS = --output-target=binary
ODFLAGS	= -x --syms

# Targets
all: main.bin

clean:
	-rm -f $(OBJECTS) crt.lst *.lst *.elf *.bin *.map *.dmp

#flash: gdb_flash
flash: oocd_flash

oocd_flash: main.elf
	$(OPENOCD) -f openocd_stlink.cfg -c "program main.elf verify reset exit"

gdb_flash: main.elf
	$(GDB) -x flash_cmd.gdb -batch
	stty sane

dfu: main.bin
	$(DFU) -a 0 -d 0483:df11 -s 0x8000000 -D main.bin

disassemble: main.elf
	$(OBJDMP) -d main.elf > main.dis

symtab: main.elf
	$(NM) main.elf | sort > main.sym
	
dist:
	tar -c *.h *.c *.s Makefile *.cmd *.cfg openocd_doflash | gzip > minimal_hello_world.tar.gz

main.ihex: main.elf
	$(OBJCPY) --output-target=ihex main.elf main.ihex

main.bin: main.elf 
	$(OBJCPY) $(CPFLAGS) main.elf main.bin
	$(OBJDMP) $(ODFLAGS) main.elf > main.dmp
	ls -l main.elf main.bin

main.elf: $(OBJECTS) $(LDSCRIPT)
	$(CC) $(LFLAGS) -o main.elf $(OBJECTS) -lnosys -lm

%.o: %.c %.h
	$(CC) $(CFLAGS) -c -o $@ $<


# G081 Audio - Firmware

This directory contains the firmware source code for the G081 Audio module. It's based on the STM32 HAL library, coupled with custom drivers for the external devices included in the G081 Audio module, such as the I2C OLED display and PT8211 stereo DAC. Note that while the hardware design includes a SPI flash it is not used in this firmware and would require additional code.

There are two build directories:

* audio - a skeleton for building applications that can process stereo audio.

* mv_comp - the Midiverb code using precompiled / optimized integer operations derived from the ROMs. The compiled code for baseline MIDIVerb algorithms is in the mv_progs.c file and was auto-generated with the compiler tools found in the [MIDIVerb_RE](https://github.com/emeb/MIDIVerb_RE) repository elsewhere in this collection.

## Prerequisites

You will need make and an Arm embedded cross compiler. I use the ones available here: [Arm GNU Toolchain Downloads – Arm Developer](https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads)

## Building

Once you've got your toolchain set up just

```
cd mv_comp
make
```

You may need to modify the Makefile to refer to the location of your toolchain.

## Programming

I use OpenOCD and an STM32 Nucleo board for programming. Note that there may be some special shenannigans required with the STM32G0 family on initial programming:

> `openocd -d0 -f stm32g0.cfg -c init -c "reset halt"  -c "mww 0x40022000 0x00040600"  -c "reset init" -c "reset run"  -c shutdown`
> 
> note the double reset
> 
> coz you need to reset AFTER you clear the EMPTY bit in FLASH->ACR
> 
> For reference - see the "empty check" paragraph in section 2.5 of the RM.

*Thanks to Vladimir Pantelic for that tip*

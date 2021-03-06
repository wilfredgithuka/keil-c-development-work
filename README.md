# Keil C / Embeeded C Development
All my development work on the STC15f2k60s2 board using Embedded C

![alt text](https://github.com/wilfredgithuka/keil-c-development-work/blob/master/DSC_0135.JPG "The STC15f2k60s2")
# What is Keil C or Embeeded C?
The use of C language to program microcontrollers is becoming too common. And most of the time its not easy to buld an application in assembly which instead you can make easily in C. So Its important that you know C language for microcontroller which is commonly known as Embedded C. As we are going to use Keil C51 Compiler, hence we also call it Keil C.

# What is the STC15f2k60s2 board?
The STC15f2k60s2 series of MCU is a single chip mirocontroller based on high performance IT architecture of 8051 produced by STC MCU limited, a Chinese company. Its a new generation of 8051 MCU which is faster, stable and low power consumption and with super strong anti-distrubance.

## Summary
* 8051-based microcontroller with 1T(1-clock) High-Speed Core
* Up to 42 I/O Lines, 3 Timers/Counters, 3 PCA Timers
* Build-in up to 35MHz oscillator
* 60K bytes flash ROM, 2048 bytes data RAM
* On-chip EEPROM, 2 UARTs, WDT, ISP/IAP, A/D, CCP/PWM

# The STC15f2k60s2 has no Operating System.
Because of this, when you are writing your code in the main() function, make sure you put your code in a while loop to ensure that it continues to run, otherwise it will fall into nothing.

# Board Details
## Form Factor: LQFP-44 (44 I/O Pins)
* STC - Program Flash in User Program area cannot be used as EEPROM, but there are special EEPROM
* 15 - Speed
* F - Unknown
* 2K - SRAM 2x1024 bytes
* 60 Program Space(Flash) Kb
* S2 - Unknown

https://www.8051projects.net/wiki/Keil_Embedded_C_Tutorial#Introduction_to_Keil_C

Thanks to staff at (KIST) Kiambu Institute of Technology for the amazing labs installed by AVIC

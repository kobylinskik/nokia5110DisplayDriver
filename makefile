TARGET = main.elf

CMSIS_DIR = ./CMSIS
CORE_SUPPORT_DIR = $(CMSIS_DIR)/CM3/CoreSupport
DEVICE_SUPPORT_DIR = $(CMSIS_DIR)/CM3/DeviceSupport/ST/STM32F10x

INC_DIR = ./inc
SRC_DIR = ./src

CC = arm-none-eabi-gcc

CCFLAGS += -mcpu=cortex-m3
CCFLAGS += -mthumb
CCFLAGS += -I.
CCFLAGS += -I$(CORE_SUPPORT_DIR)
CCFLAGS += -I$(DEVICE_SUPPORT_DIR)
CCFLAGS += -I$(INC_DIR)
CCFLAGS += --specs=nosys.specs
CCFLAGS += -g

INPUT += $(SRC_DIR)/main.c
INPUT += $(SRC_DIR)/clockSetup.c
INPUT += $(SRC_DIR)/pinSetup.c
INPUT += $(SRC_DIR)/spiDriver.c
INPUT += $(SRC_DIR)/displayFunctions.c
INPUT += $(SRC_DIR)/font.c
INPUT += $(SRC_DIR)/point.c
INPUT += $(DEVICE_SUPPORT_DIR)/startup/gcc_ride7/startup_stm32f10x_ld.s
INPUT += $(DEVICE_SUPPORT_DIR)/system_stm32f10x.c
INPUT += $(CORE_SUPPORT_DIR)/core_cm3.c


LD = -T./linkerScript.ld

OUTPUT = -o $(TARGET)

main:
	$(CC) $(CCFLAGS) $(INPUT) $(LD) $(OUTPUT)
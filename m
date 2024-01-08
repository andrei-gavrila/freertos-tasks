#!/bin/bash

PATH=/home/andreig/esp8266/esp-open-sdk/xtensa-lx106-elf/bin:$PATH
SDK_PATH=/home/andreig/esp8266/esp-open-rtos/

PATH=/home/andreig/.local/bin:$PATH

ESPPORT=rfc2217://localhost:4000?ign_set_control FLASH_SIZE=1 make "$@"

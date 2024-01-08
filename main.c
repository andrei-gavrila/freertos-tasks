#include <stdio.h>
#include "esp/uart.h"
#include "espressif/esp_common.h"
#include "FreeRTOS.h"
#include "task.h"

void task1(void *pvParameters)
{
    printf("task1(): start\n");
 
    while (true) {
        printf("task1(): loop\n");

        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}

void user_init()
{
    uart_set_baud(0, 115200);

    sdk_wifi_set_opmode(NULL_MODE);

    printf("SDK version: %s\n", sdk_system_get_sdk_version());

    xTaskCreate(task1, "task1", 256, NULL, tskIDLE_PRIORITY, NULL);
}

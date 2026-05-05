#include <stdio.h>
#include<esp_log.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED_GPIO GPIO_NUM_48

void app_main(void)
{
    while(1)
    {
        ESP_LOGI("main","HelloWorld");
        printf("hello\r\n")  ;                                                 
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
   
}

#include <iostream>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

extern "C" {
   void app_main(void);
}

void app_main(void)
{
    while (true) {
        std::string hellomessage = "Hi There!";
        std::cout << hellomessage << '\n';
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}

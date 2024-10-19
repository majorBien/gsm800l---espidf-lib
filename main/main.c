#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/uart.h"
#include "esp_log.h"
#include "string.h"
#include "gsm.h"



void app_main(void) {
    init_uart();
    init_sim800l();

	send_sms("515560361", "hej");	

	
    
}
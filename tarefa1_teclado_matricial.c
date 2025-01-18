#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

void init_gpio() {
    

    uint8_t led_pins[] = {LED1, LED2, LED3};
    for (int i = 0; i < 3; i++) {
        gpio_init(led_pins[i]);
        gpio_set_dir(led_pins[i], GPIO_OUT);
        gpio_put(led_pins[i], 0); // LEDs desligados
    }
}

int main()
{
    stdio_init_all();
    init_gpio();

    char last_key = 0; // Variável para armazenar a última tecla pressionada


    while (1) {
        
    }
}

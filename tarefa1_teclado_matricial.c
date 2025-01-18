#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

void init_gpio() {
    for (int i = 0; i < COLS; i++) {
        gpio_init(col_pins[i]);
        gpio_set_dir(col_pins[i], GPIO_IN);
        gpio_pull_up(col_pins[i]);
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

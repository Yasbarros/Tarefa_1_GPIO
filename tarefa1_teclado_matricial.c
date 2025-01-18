#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

void init_gpio() {
    //Configuração das linhas do teclado como saídas
    for (int i = 0; i < ROWS; i++) {
        gpio_init(row_pins[i]);
        gpio_set_dir(row_pins[i], GPIO_OUT);
        gpio_put(row_pins[i], 1); // Inicializa em estado alto
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

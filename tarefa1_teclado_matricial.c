#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"



void init_gpio() {
    // Configuração do buzzer como saída
    gpio_init(BUZZER_PIN);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT);

    // Seta o buzzer como desligado por default
    gpio_put(BUZZER_PIN, 0); 
}



int main()
{
    stdio_init_all();
    //init_gpio();

    char last_key = 0; // Variável para armazenar a última tecla pressionada


    while (1) {

    }
}

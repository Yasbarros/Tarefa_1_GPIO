#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

char scan_keypad() {
    for (int row = 0; row < ROWS; row++) {
        gpio_put(row_pins[row], 0); // Ativa a linha atual
        for (int col = 0; col < COLS; col++) {
            if (gpio_get(col_pins[col]) == 0) { // Verifica se a coluna está ativa
                gpio_put(row_pins[row], 1); // Desativa a linha atual
                return keys[row][col]; // Retorna a tecla pressionada
            }
        }
        gpio_put(row_pins[row], 1); // Desativa a linha atual
    }
    return 0; // Nenhuma tecla pressionada
}

int main()
{
    stdio_init_all();
    init_gpio();

    char last_key = 0; // Variável para armazenar a última tecla pressionada


    while (1) {
        
    }
}

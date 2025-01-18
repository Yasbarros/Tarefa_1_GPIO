#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>















// Mapeamento das teclas do teclado matricial
const char keys[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};

int main()
{
    stdio_init_all();
    init_gpio();

    char last_key = 0; // Variável para armazenar a última tecla pressionada


    while (1) {
        
    }
}

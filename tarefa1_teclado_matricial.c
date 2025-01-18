#include <stdio.h>
#include <pico/stdlib.h>
#include <hardware/gpio.h>

// Definição dos Pinos
#define ROWS 4
#define COLS 4
uint8_t row_pins[ROWS] = {2, 3, 4, 5};  // Pinos das linhas do teclado
uint8_t col_pins[COLS] = {6, 7, 8, 9};  // Pinos das colunas do teclado

// LEDs GPIO
#define LED1 11
#define LED2 12
#define LED3 13

// Buzzer
#define BUZZER_PIN 21

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

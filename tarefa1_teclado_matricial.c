<<<<<<< HEAD
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

void init_gpio() {
    //Configuração das linhas do teclado como saídass
    for (int i = 0; i < ROWS; i++) {
        gpio_init(row_pins[i]);
        gpio_set_dir(row_pins[i], GPIO_OUT);
        gpio_put(row_pins[i], 1); // Inicializa em estado alto
    }

    for (int i = 0; i < COLS; i++) {
        gpio_init(col_pins[i]);
        gpio_set_dir(col_pins[i], GPIO_IN);
        gpio_pull_up(col_pins[i]);
    }

    gpio_init(BUZZER_PIN);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT);
    gpio_put(BUZZER_PIN, 0); 
}




=======
        if (key && key != last_key) { // Apenas processa nova tecla
            printf("Tecla pressionada: %c\n", key);
>>>>>>> origin/condicional1

            // Controla LEDs e buzzer com base na tecla pressionada
            switch (key) {
                case 'A':
                    gpio_put(LED3, 1); // Acende LED3
                    break;
                case 'B':
                    gpio_put(LED2, 1); // Acende LED2
                    break;
                case 'C':
                    gpio_put(LED1, 1); // Acende LED1
                    break;
                case 'D':
                    // Acende todos os LEDs
                    gpio_put(LED1, 1);
                    gpio_put(LED2, 1);
                    gpio_put(LED3, 1);
                    break;
                case '*':
                    gpio_put(BUZZER_PIN, 1); // Liga buzzer
                    break;
                default:
                    break;
            }

<<<<<<< HEAD
int main()
{
    stdio_init_all();
    //init_gpio();

    char last_key = 0; // Variável para armazenar a última tecla pressionada


    while (1) {

    }
}
=======
            last_key = key; // Atualiza a última tecla pressionada
        }
>>>>>>> origin/condicional1

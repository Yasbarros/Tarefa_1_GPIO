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

    uint8_t led_pins[] = {LED1, LED2, LED3};
    for (int i = 0; i < 3; i++) {
        gpio_init(led_pins[i]);
        gpio_set_dir(led_pins[i], GPIO_OUT);
        gpio_put(led_pins[i], 0); // LEDs desligados
    }
    
    gpio_init(BUZZER_PIN);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT);
    gpio_put(BUZZER_PIN, 0);
}

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
    return 0; // Nenhuma tecla pressionadas
}

int main()
{
    stdio_init_all();
    init_gpio();
    char last_key = 0; // Variável para armazenar a última tecla pressionada

    while (1) {
        char key = scan_keypad();

        if (key && key != last_key) { // Apenas processa nova tecla
            printf("Tecla pressionada: %c\n", key);

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
            last_key = key;
        }
        if (!key && last_key) { // Detecta liberação de tecla
            // Desliga LEDs e buzzer quando a tecla é liberada
            gpio_put(LED1, 0);
            gpio_put(LED2, 0);
            gpio_put(LED3, 0);
            gpio_put(BUZZER_PIN, 0);

            last_key = 0; // Reseta a última tecla
        }
    }
}
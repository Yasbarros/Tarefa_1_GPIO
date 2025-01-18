        if (key && key != last_key) { // Apenas processa nova tecla
            printf("Tecla pressionada: %c\n", key);

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

            last_key = key; // Atualiza a última tecla pressionada
        }
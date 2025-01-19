Projeto: Teclado Matricial com LEDs e Buzzer

Este projeto implementa um sistema básico de leitura de um teclado matricial 4x4 utilizando um Raspberry Pi Pico. O código configura e controla LEDs e um buzzer com base nas teclas pressionadas.

Características do Projeto

Teclado Matricial 4x4: Mapeado para entradas de caracteres alfanuméricos.

Controle de LEDs: Três LEDs que podem ser ativados com teclas específicas.

Buzzer: Ativado pela tecla *.

Hardware Necessário

Raspberry Pi Pico

Teclado Matricial 4x4

Três LEDs (com resistores apropriados)

Buzzer

Cabos de conexão

Protoboard

Conexões

Teclado Matricial

Linhas do teclado conectadas aos GPIOs: 2, 3, 4, 5

Colunas do teclado conectadas aos GPIOs: 6, 7, 8, 9

LEDs

LED1: GPIO 11

LED2: GPIO 12

LED3: GPIO 13

Buzzer

Buzzer: GPIO 21

Funcionamento do Sistema

Inicialização:

As linhas do teclado são configuradas como saídas e iniciadas em estado alto.

As colunas do teclado são configuradas como entradas com resistores de pull-up.

LEDs e buzzer são configurados como saídas.

Varredura do Teclado:

O sistema percorre as linhas do teclado e verifica quais colunas estão ativas, determinando a tecla pressionada.

Ações Baseadas na Entrada:

Tecla A: Ativa o LED3 (Vermelho).

Tecla B: Ativa o LED2 (Azul).

Tecla C: Ativa o LED1 (Verde).

Tecla D: Ativa todos os LEDs.

Tecla *: Ativa o buzzer.

Liberação da Tecla:

Quando nenhuma tecla está pressionada, todos os LEDs e o buzzer são desligados.

Compilação e Execução

Requisitos

SDK do Raspberry Pi Pico configurado.

Ferramentas de compilação (CMake, GCC).

Instruções

Clone o repositório do projeto:

git clone <URL_DO_REPOSITORIO>
cd <PASTA_DO_PROJETO>

Compile o código:

Envie o binário para o Raspberry Pi Pico:

Conecte o Pico ao computador em modo bootloader.

Copie o arquivo .uf2 gerado para o dispositivo USB montado.

Observações

Certifique-se de usar resistores adequados para os LEDs.

Garanta que o buzzer esteja conectado corretamente para evitar danos.


Projeto: Teclado Matricial com LEDs e Buzzer
Este projeto implementa um sistema básico de leitura de um teclado matricial 4x4 utilizando um Raspberry Pi Pico. O código configura e controla LEDs e um buzzer com base nas teclas pressionadas.
Características do Projeto

•	Teclado Matricial 4x4: Mapeado para entradas de caracteres alfanuméricos.

•	Controle de LEDs: Três LEDs que podem ser ativados com teclas específicas.

•	Buzzer: Ativado pela tecla *.

Hardware Necessário

1.	Raspberry Pi Pico
2.	
3.	Teclado Matricial 4x4
4.	
5.	Três LEDs (com resistores apropriados)
6.	
7.	Buzzer
8.	
9.	Cabos de conexão
10.	Protoboard
Conexões
Teclado Matricial


•	Linhas do teclado co
nectadas aos GPIOs: 2, 3, 4, 5
•	Colunas do teclado conectadas aos GPIOs: 6, 7, 8, 9
LEDs
•	LED1: GPIO 11
•	LED2: GPIO 12
•	LED3: GPIO 13
Buzzer
•	Buzzer: GPIO 21
Funcionamento do Sistema
1.	Inicialização:
o	As linhas do teclado são configuradas como saídas e iniciadas em estado alto.
o	As colunas do teclado são configuradas como entradas com resistores de pull-up.
o	LEDs e buzzer são configurados como saídas.
2.	Varredura do Teclado:
o	O sistema percorre as linhas do teclado e verifica quais colunas estão ativas, determinando a tecla pressionada.
3.	Ações Baseadas na Entrada:
o	Tecla A: Ativa o LED3. (VERMELHO)
o	Tecla B: Ativa o LED2. (AZUL)
o	Tecla C: Ativa o LED1. (VERDE)
o	Tecla D: Ativa todos os LEDs.
o	Tecla *: Ativa o buzzer.
4.	Liberação da Tecla:
o	Quando nenhuma tecla está pressionada, todos os LEDs e o buzzer são desligados.
Compilação e Execução
Requisitos
•	SDK do Raspberry Pi Pico configurado.
•	Ferramentas de compilação (CMake, GCC).
Instruções
1.	Clone o repositório do projeto:
2.	git clone <URL_DO_REPOSITORIO>
3.	cd <PASTA_DO_PROJETO>
4.	Compile o código:
5.	Envie o binário para o Raspberry Pi Pico:
o	Conecte o Pico ao computador em modo bootloader.
o	Copie o arquivo .uf2 gerado para o dispositivo USB montado.
Observações
•	Certifique-se de usar resistores adequados para os LEDs.
•	Garanta que o buzzer esteja conectado corretamente para evitar danos.

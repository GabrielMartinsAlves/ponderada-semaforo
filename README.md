# Implementação de Semáforo Simulado com ESP32

Este projeto consiste na implementação do funcionamento de um semáforo utilizando o microcontrolador ESP32, três LEDs (vermelho, amarelo e verde) e resistores de 330Ω, configurados para operar conforme um ciclo pré-definido. Esta atividade foi desenvolvida com o objetivo de simular um semáforo real, replicando o fluxo de trânsito urbano e empregando práticas de programação em sistemas embarcados e eletrônica básica.

## Descrição Funcional

O sistema de semáforo foi projetado para operar de acordo com uma sequência de fases, com tempos precisos associados a cada estado do sinal, como descrito abaixo:

1. **Vermelho**: Indica parada total, com duração de 6 segundos.
2. **Amarelo**: Indica alerta e redução de velocidade, com duração de 2 segundos.
3. **Verde (primeira fase)**: Indica permissão de passagem, com duração de 2 segundos.
4. **Verde (fase de extensão)**: Tempo adicional de 2 segundos, simulando um período extra para finalização de travessia por pedestres.
5. **Amarelo (segunda fase)**: Retorno ao alerta de parada, com duração de 2 segundos.

O ciclo é programado para reiniciar automaticamente, replicando continuamente o fluxo de um semáforo real em operação.

## Estrutura do Projeto

Este projeto utiliza um ESP32 para controle e execução da lógica de estados. Cada LED (vermelho, amarelo e verde) é conectado a uma porta digital específica do ESP32, conforme a tabela a seguir:

- **LED Vermelho**: Conectado ao pino 25 do ESP32.
- **LED Amarelo**: Conectado ao pino 26 do ESP32.
- **LED Verde**: Conectado ao pino 27 do ESP32.

Cada LED é acoplado a um resistor de 330Ω em série, garantindo proteção contra sobrecarga e otimizando o fluxo de corrente. Essa configuração visa aumentar a durabilidade do hardware e prevenir danos ao microcontrolador e aos LEDs.

### Componentes Utilizados

- **ESP32**: Microcontrolador principal, responsável pelo controle lógico e temporização do semáforo.
- **LED Vermelho**: Indicador de parada total.
- **LED Amarelo**: Indicador de transição e alerta.
- **LED Verde**: Indicador de passagem permitida.
- **Resistores de 330Ω**: Limitadores de corrente para cada LED, protegendo o circuito e aumentando a segurança operacional.
- **Jumpers**: Utilizados para conexões entre o microcontrolador e os LEDs.

### Esquema de Conexão

Abaixo, o detalhamento da configuração de portas e conexões do ESP32 com os LEDs, com resistores em série para garantir a operação segura do circuito:

| Componente  | Porta Digital do ESP32 | Resistência |
|-------------|-------------------------|-------------|
| LED Vermelho| 25                      | 330Ω        |
| LED Amarelo | 26                      | 330Ω        |
| LED Verde   | 27                      | 330Ω        |

## Implementação do Código

O código completo, disponível no arquivo `semaforo.ino`, utiliza a função `digitalWrite()` para controlar o estado de cada LED, alternando entre níveis altos e baixos (HIGH e LOW) e utilizando a função `delay()` para definir a duração de cada fase. O ciclo completo é programado para se repetir indefinidamente, simulando um semáforo em operação contínua.

### Estrutura do Código

- **Fase Vermelha**: Configura o LED vermelho como `HIGH` durante 6 segundos, mantendo os demais LEDs em `LOW`.
- **Primeira Fase Amarela**: Configura o LED amarelo como `HIGH` durante 2 segundos, mantendo os demais LEDs em `LOW`.
- **Primeira Fase Verde**: Configura o LED verde como `HIGH` durante 2 segundos.
- **Extensão da Fase Verde**: Mantém o LED verde como `HIGH` por mais 2 segundos.
- **Segunda Fase Amarela**: Retorna o LED amarelo para `HIGH` durante 2 segundos, concluindo o ciclo.

## Procedimento para Compilação e Upload

1. Abra a IDE do Arduino.
2. Conecte o ESP32 ao computador via USB.
3. Carregue o código `semaforo.ino` na IDE.
4. Selecione a placa ESP32 e a porta serial correta no menu de configurações da IDE.
5. Clique em **Upload** para enviar o código ao ESP32.

## Considerações Adicionais

O projeto foi desenvolvido como uma atividade técnica prática para simulação de sistemas de controle de tráfego e aplicação de fundamentos em microcontroladores. Para futuras expansões do projeto, sugere-se:

- Adicionar sensores para detecção de veículos ou pedestres.
- Implementar um display para contagem regressiva do tempo de cada fase.
- Integrar um buzzer para sinais sonoros nos períodos de transição.

## Autor

Este projeto foi desenvolvido como uma atividade acadêmica no curso de Engenharia de Computação, com foco em sistemas embarcados e controle de dispositivos externos via microcontroladores.

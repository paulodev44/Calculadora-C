# Calculadora Científica em C

Este projeto implementa uma calculadora científica em C , que oferece desde operações aritméticas básicas (soma, subtração, multiplicação e divisão) até funções matemáticas avançadas, como exponenciação, logaritmos, funções trigonométricas (seno, cosseno, tangente), funções hiperbólicas e cálculo da hipotenusa.

-----

## O que o programa faz

O usuário interage através de um menu interativo em loop, podendo realizar várias operações até escolher a opção de sair. O programa aceita um ou dois números, dependendo da operação, e exibe o resultado.

-----

## Operações Disponíveis

O programa oferece as seguintes funcionalidades:

**Operações com dois números:**

  * 1 – Soma 
  * 2 – Subtração 
  * 3 – Multiplicação 
  * 4 – Divisão 
  * 5 – Exponenciação (Potência) 
  * 17 – Hipotenusa 

**Operações com um número:**

  * 6 – Raiz Quadrada 
  * 7 – Raiz Cúbica
  * 8 – Seno 
  * 9 – Cosseno 
  * 10 – Tangente 
  * 11 – Logaritmo na Base 10 
  * 12 – Logaritmo Natural 
  * 13 – Constante de Euler (e^x)
  * 14 – Arco-Cosseno
  * 15 – Arco-Seno
  * 16 – Arco-Tangente
  * 18 – Seno Hiperbólico 
  * 19 – Cosseno Hiperbólico
  * 20 – Tangente Hiperbólica

-----

## Tecnologias e Recursos Utilizados

  * **Linguagem C**: linguagem de programação utilizada.
  * **Bibliotecas padrão**:
      * `stdio.h` para entrada e saída de dados.
      * `math.h` para funções matemáticas avançadas (pow, sqrt, sin, cos, etc.).
      * `stdbool.h` para uso do tipo booleano (true/false).
  * **Estruturas de controle**: `switch`, `if/else`, `do-while`.

-----

## Como Compilar e Executar

### 1\. Pré-requisitos

  * Ter um compilador C instalado (ex: GCC, MinGW no Windows, ou gec no Linux).
  * Um editor de texto/IDE (VS Code, Code::Blocks, Dev-C++, etc.).

### 2\. Compilação

```bash
gcc calculadora.c -o calculadora -lm
```

  * O parâmetro `-lm` é necessário para linkar a biblioteca matemática (`math.h`).

### 3\. Execução
```
./main.exe
```
-----

## Informações Adicionais

  * O programa trata erros comuns, como Divisão por zero , Logaritmo de números não positivos, Raiz quadrada de número negativo e Domínio inválido em funções trigonométricas inversas (asin, acos).
  * Os cálculos trigonométricos são feitos em **radianos**, não em graus.
  * A formatação de saída muda conforme a operação, usando duas casas decimais para operações básicas e quatro casas decimais para funções trigonométricas.

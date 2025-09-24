#include <stdio.h> 
#include <math.h> 


#define _USE_MATH_DEFINES

// Verifica se a constante M_PI (o número Pi) não foi definida.
#ifndef M_PI
// Se não foi definida, define M_PI com um valor de alta precisão.
#define M_PI 3.14159265358979323846
#endif

// Verifica se a constante M_E (o número de Euler) não foi definida.
#ifndef M_E
// Se não foi definida, define M_E com um valor de alta precisão.
#define M_E 2.71828182845904523536
#endif

// A função main é o ponto de entrada de qualquer programa em C.
int main() {
    // Declara uma variável 'opcao' do tipo inteiro para armazenar a escolha do usuário.
    int opcao;
    // Declara três variáveis do tipo 'double' para armazenar os números da operação e o resultado.
    // 'double' é usado para permitir números com casas decimais e de maior precisão.
    double num1, num2, resultado;

    // Exibe o menu de opções para o usuário.
    printf("Escolha a operacao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Exponenciacao (a^b)\n");
    printf("6 - Raiz Quadrada\n");
    printf("7 - Seno\n");
    printf("8 - Cosseno\n");
    printf("9 - Tangente\n");
    printf("10 - Logaritmo base 10 (log10)\n");
    printf("11 - Logaritmo Neperiano (ln)\n");
    printf("12 - Exponencial (e^x)\n");
    // Solicita que o usuário digite a opção desejada.
    printf("Digite a opcao: ");
    // Lê o número inteiro digitado pelo usuário e o armazena na variável 'opcao'.
    scanf("%d", &opcao);

    // A estrutura switch-case avalia o valor da variável 'opcao' e executa o bloco de código correspondente.
    switch(opcao) {
        // Caso a opção seja 1 (Adição):
        case 1:
            // Pede ao usuário para digitar dois números.
            printf("Digite dois numeros: ");
            // Lê os dois números (double) e os armazena em num1 e num2.
            scanf("%lf %lf", &num1, &num2);
            // Realiza a soma e guarda o valor em 'resultado'.
            resultado = num1 + num2;
            // Exibe o resultado formatado com duas casas decimais.
            printf("Resultado: %.2lf\n", resultado);
            // 'break' finaliza a execução do switch.
            break;
        // Caso a opção seja 2 (Subtração):
        case 2:
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        // Caso a opção seja 3 (Multiplicação):
        case 3:
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        // Caso a opção seja 4 (Divisão):
        case 4:
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
            // Verifica se o segundo número (divisor) é diferente de zero para evitar um erro matemático.
            if(num2 != 0) {
                // Se não for zero, realiza a divisão.
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            } else {
                // Se for zero, exibe uma mensagem de erro.
                printf("Erro: Divisao por zero!\n");
            }
            break;
        // Caso a opção seja 5 (Exponenciação):
        case 5:
            printf("Digite a base e o expoente: ");
            scanf("%lf %lf", &num1, &num2);
            // Usa a função 'pow' da biblioteca math.h para calcular num1 elevado a num2.
            resultado = pow(num1, num2);
            printf("Resultado: %.2lf\n", resultado);
            break;
        // Caso a opção seja 6 (Raiz Quadrada):
        case 6:
            printf("Digite o numero: ");
            scanf("%lf", &num1);
            // Verifica se o número é não negativo, pois não existe raiz quadrada real de número negativo.
            if(num1 >= 0) {
                // Usa a função 'sqrt' da biblioteca math.h para calcular a raiz quadrada.
                resultado = sqrt(num1);
                printf("Resultado: %.2lf\n", resultado);
            } else {
                // Se o número for negativo, exibe uma mensagem de erro.
                printf("Erro: Raiz de numero negativo!\n");
            }
            break;
        // Caso a opção seja 7 (Seno):
        case 7:
            printf("Digite o angulo em graus: ");
            scanf("%lf", &num1);
            // As funções trigonométricas em C esperam o ângulo em radianos.
            // A fórmula (num1 * M_PI / 180) converte o ângulo de graus para radianos.
            resultado = sin(num1 * M_PI / 180);
            printf("Resultado: %.2lf\n", resultado);
            break;
        // Caso a opção seja 8 (Cosseno):
        case 8:
            printf("Digite o angulo em graus: ");
            scanf("%lf", &num1);
            // Converte graus para radianos antes de calcular o cosseno.
            resultado = cos(num1 * M_PI / 180);
            printf("Resultado: %.2lf\n", resultado);
            break;
        // Caso a opção seja 9 (Tangente):
        case 9:
            printf("Digite o angulo em graus: ");
            scanf("%lf", &num1);
            // Converte graus para radianos antes de calcular a tangente.
            resultado = tan(num1 * M_PI / 180);
            printf("Resultado: %.2lf\n", resultado);
            break;
        // Caso a opção seja 10 (Logaritmo na base 10):
        case 10:
            printf("Digite o numero: ");
            scanf("%lf", &num1);
            // Verifica se o número é positivo, pois logaritmos não são definidos para números não positivos.
            if(num1 > 0) {
                // Usa a função 'log10' para calcular o logaritmo na base 10.
                resultado = log10(num1);
                printf("Resultado: %.2lf\n", resultado);
            } else {
                // Se o número não for positivo, exibe uma mensagem de erro.
                printf("Erro: Logaritmo de numero nao positivo!\n");
            }
            break;
        // Caso a opção seja 11 (Logaritmo Neperiano - base e):
        case 11:
            printf("Digite o numero: ");
            scanf("%lf", &num1);
            // Verifica se o número é positivo.
            if(num1 > 0) {
                // Usa a função 'log' para calcular o logaritmo natural (base e).
                resultado = log(num1);
                printf("Resultado: %.2lf\n", resultado);
            } else {
                // Se o número não for positivo, exibe uma mensagem de erro.
                printf("Erro: Logaritmo de numero nao positivo!\n");
            }
            break;
        // Caso a opção seja 12 (Exponencial - e^x):
        case 12:
            printf("Digite o expoente x para e^x: ");
            scanf("%lf", &num1);
            // Usa a função 'exp' para calcular e elevado ao número digitado.
            resultado = exp(num1);
            printf("Resultado: %.2lf\n", resultado);
            break;
        // O caso 'default' é executado se o valor de 'opcao' não corresponder a nenhum dos 'case' anteriores.
        default:
            printf("Opcao invalida!\n");
    }
    // Retorna 0 para o sistema operacional, indicando que o programa foi executado com sucesso.
    return 0;
}

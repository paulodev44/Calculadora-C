#include <stdio.h> 
#include <math.h> 


#define _USE_MATH_DEFINES

// Verifica se a constante M_PI (o n�mero Pi) n�o foi definida.
#ifndef M_PI
// Se n�o foi definida, define M_PI com um valor de alta precis�o.
#define M_PI 3.14159265358979323846
#endif

// Verifica se a constante M_E (o n�mero de Euler) n�o foi definida.
#ifndef M_E
// Se n�o foi definida, define M_E com um valor de alta precis�o.
#define M_E 2.71828182845904523536
#endif

// A fun��o main � o ponto de entrada de qualquer programa em C.
int main() {
    // Declara uma vari�vel 'opcao' do tipo inteiro para armazenar a escolha do usu�rio.
    int opcao;
    // Declara tr�s vari�veis do tipo 'double' para armazenar os n�meros da opera��o e o resultado.
    // 'double' � usado para permitir n�meros com casas decimais e de maior precis�o.
    double num1, num2, resultado;

    // Exibe o menu de op��es para o usu�rio.
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
    // Solicita que o usu�rio digite a op��o desejada.
    printf("Digite a opcao: ");
    // L� o n�mero inteiro digitado pelo usu�rio e o armazena na vari�vel 'opcao'.
    scanf("%d", &opcao);

    // A estrutura switch-case avalia o valor da vari�vel 'opcao' e executa o bloco de c�digo correspondente.
    switch(opcao) {
        // Caso a op��o seja 1 (Adi��o):
        case 1:
            // Pede ao usu�rio para digitar dois n�meros.
            printf("Digite dois numeros: ");
            // L� os dois n�meros (double) e os armazena em num1 e num2.
            scanf("%lf %lf", &num1, &num2);
            // Realiza a soma e guarda o valor em 'resultado'.
            resultado = num1 + num2;
            // Exibe o resultado formatado com duas casas decimais.
            printf("Resultado: %.2lf\n", resultado);
            // 'break' finaliza a execu��o do switch.
            break;
        // Caso a op��o seja 2 (Subtra��o):
        case 2:
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        // Caso a op��o seja 3 (Multiplica��o):
        case 3:
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        // Caso a op��o seja 4 (Divis�o):
        case 4:
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
            // Verifica se o segundo n�mero (divisor) � diferente de zero para evitar um erro matem�tico.
            if(num2 != 0) {
                // Se n�o for zero, realiza a divis�o.
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            } else {
                // Se for zero, exibe uma mensagem de erro.
                printf("Erro: Divisao por zero!\n");
            }
            break;
        // Caso a op��o seja 5 (Exponencia��o):
        case 5:
            printf("Digite a base e o expoente: ");
            scanf("%lf %lf", &num1, &num2);
            // Usa a fun��o 'pow' da biblioteca math.h para calcular num1 elevado a num2.
            resultado = pow(num1, num2);
            printf("Resultado: %.2lf\n", resultado);
            break;
        // Caso a op��o seja 6 (Raiz Quadrada):
        case 6:
            printf("Digite o numero: ");
            scanf("%lf", &num1);
            // Verifica se o n�mero � n�o negativo, pois n�o existe raiz quadrada real de n�mero negativo.
            if(num1 >= 0) {
                // Usa a fun��o 'sqrt' da biblioteca math.h para calcular a raiz quadrada.
                resultado = sqrt(num1);
                printf("Resultado: %.2lf\n", resultado);
            } else {
                // Se o n�mero for negativo, exibe uma mensagem de erro.
                printf("Erro: Raiz de numero negativo!\n");
            }
            break;
        // Caso a op��o seja 7 (Seno):
        case 7:
            printf("Digite o angulo em graus: ");
            scanf("%lf", &num1);
            // As fun��es trigonom�tricas em C esperam o �ngulo em radianos.
            // A f�rmula (num1 * M_PI / 180) converte o �ngulo de graus para radianos.
            resultado = sin(num1 * M_PI / 180);
            printf("Resultado: %.2lf\n", resultado);
            break;
        // Caso a op��o seja 8 (Cosseno):
        case 8:
            printf("Digite o angulo em graus: ");
            scanf("%lf", &num1);
            // Converte graus para radianos antes de calcular o cosseno.
            resultado = cos(num1 * M_PI / 180);
            printf("Resultado: %.2lf\n", resultado);
            break;
        // Caso a op��o seja 9 (Tangente):
        case 9:
            printf("Digite o angulo em graus: ");
            scanf("%lf", &num1);
            // Converte graus para radianos antes de calcular a tangente.
            resultado = tan(num1 * M_PI / 180);
            printf("Resultado: %.2lf\n", resultado);
            break;
        // Caso a op��o seja 10 (Logaritmo na base 10):
        case 10:
            printf("Digite o numero: ");
            scanf("%lf", &num1);
            // Verifica se o n�mero � positivo, pois logaritmos n�o s�o definidos para n�meros n�o positivos.
            if(num1 > 0) {
                // Usa a fun��o 'log10' para calcular o logaritmo na base 10.
                resultado = log10(num1);
                printf("Resultado: %.2lf\n", resultado);
            } else {
                // Se o n�mero n�o for positivo, exibe uma mensagem de erro.
                printf("Erro: Logaritmo de numero nao positivo!\n");
            }
            break;
        // Caso a op��o seja 11 (Logaritmo Neperiano - base e):
        case 11:
            printf("Digite o numero: ");
            scanf("%lf", &num1);
            // Verifica se o n�mero � positivo.
            if(num1 > 0) {
                // Usa a fun��o 'log' para calcular o logaritmo natural (base e).
                resultado = log(num1);
                printf("Resultado: %.2lf\n", resultado);
            } else {
                // Se o n�mero n�o for positivo, exibe uma mensagem de erro.
                printf("Erro: Logaritmo de numero nao positivo!\n");
            }
            break;
        // Caso a op��o seja 12 (Exponencial - e^x):
        case 12:
            printf("Digite o expoente x para e^x: ");
            scanf("%lf", &num1);
            // Usa a fun��o 'exp' para calcular e elevado ao n�mero digitado.
            resultado = exp(num1);
            printf("Resultado: %.2lf\n", resultado);
            break;
        // O caso 'default' � executado se o valor de 'opcao' n�o corresponder a nenhum dos 'case' anteriores.
        default:
            printf("Opcao invalida!\n");
    }
    // Retorna 0 para o sistema operacional, indicando que o programa foi executado com sucesso.
    return 0;
}

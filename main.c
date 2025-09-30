// Inclui a biblioteca de entrada e saída
#include <stdio.h>
// Inclui a biblioteca matemática
#include <math.h>
// Inclui a biblioteca booleana
#include <stdbool.h>

// Define a constante PI 
#define PI 3.14159265358979323846

// Função principal, onde a execução do programa começa.
int main() {
    int escolha;
    double num1, num2;

    do {
        // --- SEÇÃO DO MENU ---
        printf("---------- CALCULADORA CIENTIFICA ----------\n");
        printf("| 1 - Soma\n");
        printf("| 2 - Subtracao\n");
        printf("| 3 - Multiplicacao\n");
        printf("| 4 - Divisao\n");
        printf("| 5 - Exponenciacao\n");
        printf("| 6 - Raiz Quadrada\n");
        printf("| 7 - Raiz Cubica\n");
        printf("| 8 - Seno\n");
        printf("| 9 - Cosseno\n");
        printf("| 10 - Tangente\n");
        printf("| 11 - Logaritmo Base 10\n");
        printf("| 12 - Logaritmo Natural\n");
        printf("| 13 - Constante de Euler (e^x)\n");
        printf("| 14 - Arco-Cosseno\n");
        printf("| 15 - Arco-Seno\n");
        printf("| 16 - Arco-Tangente\n");
        printf("| 17 - Hipotenusa\n");
        printf("| 18 - Seno Hiperbolico\n");
        printf("| 19 - Cosseno Hiperbolico\n");
        printf("| 20 - Tangente Hiperbolica\n");
        printf("\n| 0 - Sair\n");
        printf("--------------------------------------------\n");
    
        // Pede ao usuário que digite sua escolha.
        printf("Escolha uma operacao: ");
        // Lê o número inteiro digitado pelo usuário e armazena na variável 'escolha'.
        scanf("%d", &escolha);

        // Verifica se a escolha do usuário foi 0 (a opção de sair).
        if (escolha == 0) {
            // Se a escolha for 0, interrompe o laço 'do-while' e o programa prossegue para o final.
            break;
        }
        
        // --- SEÇÃO DE ENTRADA DE NÚMEROS ---
        // Verifica se a operação escolhida precisa de dois números.
        if ((escolha >= 1 && escolha <= 5) || escolha == 17) {
            // Pede o primeiro número ao usuário.
            printf("Digite o primeiro numero: ");
            // Lê o primeiro número (double) e armazena em 'num1'.
            scanf("%lf", &num1);
            // Pede o segundo número ao usuário.
            printf("Digite o segundo numero: ");
            // Lê o segundo número (double) e armazena em 'num2'.
            scanf("%lf", &num2);
        } 
        // Se não, verifica se a operação precisa de apenas um número.
        else if (escolha >= 6 && escolha <= 20) {
            // Pede o único número necessário.
            printf("Digite o numero: ");
            // Verifica se é uma operação trigonométrica para adicionar um aviso.
            if (escolha >= 8 && escolha <= 10) {
                 // Informa ao usuário que o ângulo deve ser em radianos.
                 printf("(o angulo sera tratado em radianos): ");
            }
            // Lê o número e armazena em 'num1'.
            scanf("%lf", &num1);
        } 
        // Se a escolha não for nenhuma das opções válidas.
        else {
            // Informa ao usuário que a opção é inválida.
            printf("\nOpcao invalida! Pressione Enter para tentar novamente.\n");
            // Limpa o buffer de entrada para remover caracteres restantes (como o Enter).
            while (getchar() != '\n');
            // Pausa o programa esperando que o usuário pressione Enter.
            getchar();
            // Pula o resto da interação atual e volta para o início do laço 'do-while'.
            continue;
        }

        // --- SEÇÃO DE CÁLCULO ---
        // Declara uma variável para armazenar o resultado do cálculo.
        double resultado;
        // Declara uma 'flag' booleana para verificar se a operação foi bem-sucedida. Inicia como verdadeira.
        bool operacaoValida = true;

        // Inicia uma estrutura switch para selecionar a operação correta com base na 'escolha'.
        switch (escolha) {
            // Caso a escolha seja 1 (Soma).
            case 1:
                // Executa a soma.
                resultado = num1 + num2;
                // Sai do switch.
                break;
            // Caso a escolha seja 2 (Subtração).
            case 2:
                // Executa a subtração.
                resultado = num1 - num2;
                // Sai do switch.
                break;
            // Caso a escolha seja 3 (Multiplicação).
            case 3:
                // Executa a multiplicação.
                resultado = num1 * num2;
                // Sai do switch.
                break;
            // Caso a escolha seja 4 (Divisão).
            case 4:
                // Verifica se o divisor é diferente de zero.
                if (num2 != 0) {
                    // Se for, realiza a divisão.
                    resultado = num1 / num2;
                // Se o divisor for zero.
                } else {
                    // Exibe uma mensagem de erro.
                    printf("ERRO: Divisao por zero!\n");
                    // Define a flag como 'false' para indicar que a operação falhou.
                    operacaoValida = false;
                }
                // Sai do switch.
                break;
            // Caso a escolha seja 5 (Exponenciação).
            case 5:
                // Calcula a potência usando a função pow() da biblioteca math.h.
                resultado = pow(num1, num2);
                // Sai do switch.
                break;
            // Caso a escolha seja 6 (Raiz Quadrada).
            case 6:
                // Verifica se o número é não-negativo.
                if (num1 >= 0) {
                    // Se for, calcula a raiz quadrada com a função sqrt().
                    resultado = sqrt(num1);
                // Se o número for negativo.
                } else {
                    // Exibe uma mensagem de erro.
                    printf("ERRO: Raiz de negativo.\n");
                    // Define a flag de operação como 'false'.
                    operacaoValida = false;
                }
                // Sai do switch.
                break;
            // Caso a escolha seja 7 (Raiz Cúbica).
            case 7:
                // Calcula a raiz cúbica com a função cbrt().
                resultado = cbrt(num1);
                // Sai do switch.
                break;
            // Caso a escolha seja 8 (Seno).
            case 8:
                // Calcula o seno do ângulo em radianos com a função sin().
                resultado = sin(num1);
                // Sai do switch.
                break;
            // Caso a escolha seja 9 (Cosseno).
            case 9:
                // Calcula o cosseno do ângulo em radianos com a função cos().
                resultado = cos(num1);
                // Sai do switch.
                break;
            // Caso a escolha seja 10 (Tangente).
            case 10:
                // Calcula a tangente do ângulo em radianos com a função tan().
                resultado = tan(num1);
                // Sai do switch.
                break;
            // Caso a escolha seja 11 (Logaritmo na Base 10).
            case 11:
                // Verifica se o número é positivo.
                if (num1 > 0) {
                    // Se for, calcula o logaritmo na base 10 com a função log10().
                    resultado = log10(num1);
                // Se o número for zero ou negativo.
                } else {
                    // Exibe uma mensagem de erro.
                    printf("ERRO: Log de nao positivo.\n");
                    // Define a flag de operação como 'false'.
                    operacaoValida = false;
                }
                // Sai do switch.
                break;
            // Caso a escolha seja 12 (Logaritmo Natural).
            case 12:
                // Verifica se o número é positivo.
                if (num1 > 0) {
                    // Se for, calcula o logaritmo natural com a função log().
                    resultado = log(num1);
                // Se o número for zero ou negativo.
                } else {
                    // Exibe uma mensagem de erro.
                    printf("ERRO: Log de nao positivo.\n");
                    // Define a flag de operação como 'false'.
                    operacaoValida = false;
                }
                // Sai do switch.
                break;
            // Caso a escolha seja 13 (Constante de Euler).
            case 13:
                // Calcula 'e' elevado ao número com a função exp().
                resultado = exp(num1);
                // Sai do switch.
                break;
            // Caso a escolha seja 14 (Arco-Cosseno).
            case 14:
                // Verifica se o número está no domínio da função [-1, 1].
                if (num1 >= -1 && num1 <= 1) {
                    // Se estiver, calcula o arco-cosseno com a função acos().
                    resultado = acos(num1);
                // Se estiver fora do domínio.
                } else {
                    // Exibe uma mensagem de erro.
                    printf("ERRO: Dominio invalido.\n");
                    // Define a flag de operação como 'false'.
                    operacaoValida = false;
                }
                // Sai do switch.
                break;
            // Caso a escolha seja 15 (Arco-Seno).
            case 15:
                // Verifica se o número está no domínio da função [-1, 1].
                if (num1 >= -1 && num1 <= 1) {
                    // Se estiver, calcula o arco-seno com a função asin().
                    resultado = asin(num1);
                // Se estiver fora do domínio.
                } else {
                    // Exibe uma mensagem de erro.
                    printf("ERRO: Dominio invalido.\n");
                    // Define a flag de operação como 'false'.
                    operacaoValida = false;
                }
                // Sai do switch.
                break;
            // Caso a escolha seja 16 (Arco-Tangente).
            case 16:
                // Calcula o arco-tangente com a função atan().
                resultado = atan(num1);
                // Sai do switch.
                break;
            // Caso a escolha seja 17 (Hipotenusa).
            case 17:
                // Calcula a hipotenusa com a função hypot().
                resultado = hypot(num1, num2);
                // Sai do switch.
                break;
            // Caso a escolha seja 18 (Seno Hiperbólico).
            case 18:
                // Calcula o seno hiperbólico com a função sinh().
                resultado = sinh(num1);
                // Sai do switch.
                break;
            // Caso a escolha seja 19 (Cosseno Hiperbólico).
            case 19:
                // Calcula o cosseno hiperbólico com a função cosh().
                resultado = cosh(num1);
                // Sai do switch.
                break;
            // Caso a escolha seja 20 (Tangente Hiperbólica).
            case 20:
                // Calcula a tangente hiperbólica com a função tanh().
                resultado = tanh(num1);
                // Sai do switch.
                break;
        }

        // --- SEÇÃO DE EXIBIÇÃO DO RESULTADO ---
        // Após o switch, verifica se a operação foi válida.
        if (operacaoValida) {
             // Se a operação foi a hipotenusa, usa uma formatação de texto especial.
             if (escolha == 17) {
                 // Imprime o resultado da hipotenusa.
                 printf("\nResultado: A hipotenusa e %.2lf\n", resultado);
             // Se foi uma operação trigonométrica, usa uma formatação com mais casas decimais.
             } else if (escolha >= 8 && escolha <= 16){
                 // Imprime o resultado com 4 casas decimais.
                 printf("\nResultado: %.4lf\n", resultado);
             // Para todas as outras operações válidas.
             } else {
                 // Imprime o resultado com a formatação padrão (2 casas decimais).
                 printf("\nResultado: %.2lf\n", resultado);
             }
        }

        // --- SEÇÃO DE PAUSA ---
        // Pede ao usuário para pressionar Enter para prosseguir.
        printf("\nPressione Enter para continuar...\n");
        // Limpa qualquer caractere restante no buffer de entrada (como o '\n' do scanf).
        while (getchar() != '\n');
        // Pausa o programa, esperando que o usuário pressione Enter.
        getchar();

    // Fim do laço 'do-while'. A condição para repetir é a 'escolha' ser diferente de 0.
    } while (escolha != 0);

    // Exibe uma mensagem de despedida quando o laço termina.
    printf("\nSaindo da calculadora\n");

    // Retorna 0, indicando que o programa foi executado com sucesso.
    return 0;
// Fecha a função main.
}
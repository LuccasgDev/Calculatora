#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2, resultado1, resultado2;
    int operacao, operacao2;
    char continuar;

    while (1) {
        printf("-----------------------------\n");
        printf("======== Calculadora ========\n");
        printf("-----------------------------\n");
        printf("Digite um numero: \n");
        scanf("%f", &numero1);
        printf("Digite o segundo numero: \n");
        scanf("%f", &numero2);
        printf("1 - soma\n");
        printf("2 - subtracao\n");
        printf("3 - multiplicacao\n");
        printf("4 - divisao\n");
        printf("5 - avancado\n");
        printf("6 - sair\n");
        scanf("%d", &operacao);

        switch (operacao) {
            case 1:
                resultado1 = numero1 + numero2;
                printf("Resultado: %.2f\n", resultado1);
                break;
            case 2:
                resultado1 = numero1 - numero2;
                printf("Resultado: %.2f\n", resultado1);
                break;
            case 3:
                resultado1 = numero1 * numero2;
                printf("Resultado: %.2f\n", resultado1);
                break;
            case 4:
                if (numero2 != 0) {
                    resultado1 = numero1 / numero2;
                    printf("Resultado: %.2f\n", resultado1);
                } else {
                    printf("Erro: divisao por zero\n");
                }
                break;
            case 5:
                printf("Opcao avancada escolhida: \n");
                printf("1 - Modulo (resto)\n");
                printf("2 - raiz quadrada\n");
                scanf("%d",&operacao2);

                switch (operacao2) {
                    case 1:
                        printf("Modulo (resto) escolhido:\n");
                        resultado1 = fmod(numero1, numero2);
                        printf("O resultado e: %.2f\n", resultado1);
                        break;
                    case 2:
                        if (numero1 >= 0) {
                            resultado1 = sqrt(numero1);
                            printf("A raiz quadrada de %.2f e: %.2f\n", numero1, resultado1);
                        } else {
                            printf("Erro: nao e possivel calcular a raiz quadrada de um numero negativo: %.2f\n", numero1);
                        }
                        if (numero2 >= 0) {
                            resultado2 = sqrt(numero2);
                            printf("A raiz quadrada de %.2f e: %.2f\n", numero2, resultado2);
                        } else {
                            printf("Erro: nao e possivel calcular a raiz quadrada de um numero negativo: %.2f\n", numero2);
                        }
                        break;
                    default:
                        printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
                }
                break;
            case 6:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
        }

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);

        if (continuar != 's' && continuar != 'S')
            break;
    }

    return 0;
}

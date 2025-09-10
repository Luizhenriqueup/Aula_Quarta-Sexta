#include <stdio.h>

int main() {
    int opcao = 0;
    float num1, num2, resultado;

    while (opcao != 5) {
        printf("Escolha uma opcao:\n");
        printf("1 - Multiplicar\n");
        printf("2 - Somar\n");
        printf("3 - Subtrair\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o primeiro valor: ");
                scanf("%f", &num1);
                printf("Digite o segundo valor: ");
                scanf("%f", &num2);
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2:
                printf("Digite o primeiro valor: ");
                scanf("%f", &num1);
                printf("Digite o segundo valor: ");
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3:
                printf("Digite o primeiro valor: ");
                scanf("%f", &num1);
                printf("Digite o segundo valor: ");
                scanf("%f", &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4:
                printf("Digite o primeiro valor: ");
                scanf("%f", &num1);
                printf("Digite o segundo valor: ");
                scanf("%f", &num2);
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: divisao por zero!\n");
                }
                break;

            case 5:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}

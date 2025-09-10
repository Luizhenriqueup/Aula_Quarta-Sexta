#include <stdio.h>

int main() {
    double num, soma = 0, cont = 0;
    double media;

    printf("Digite valores inteiros (-99 para encerrar):\n");

    while (1) {
        scanf("%lf", &num);

        if (num == -99) {
            break;
        }

        soma += num;
        cont++;
    }

    if (cont > 0) {
        media = soma / cont;
        printf("\nSoma = %lf\n", soma);
        printf("Media = %.2lf\n", media);
    } else {
        printf("\nNenhum valor foi digitado!\n");
    }

    return 0;
}

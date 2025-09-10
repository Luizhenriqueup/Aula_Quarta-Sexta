#include <stdio.h>

int main() {
    double idade, cont;
    double peso;
    double soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;
    double cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;

    for (cont = 1; cont <= 15; cont++) {
        printf("Digite a idade da pessoa %d: ", cont);
        scanf("%lf", &idade);

        printf("Digite o peso da pessoa %d: ", cont);
        scanf("%lf", &peso);

        if (idade >= 1 && idade <= 10) {
            soma1 += peso;
            cont1++;
        } else if (idade >= 11 && idade <= 20) {
            soma2 += peso;
            cont2++;
        } else if (idade >= 21 && idade <= 30) {
            soma3 += peso;
            cont3++;
        } else if (idade > 30) {
            soma4 += peso;
            cont4++;
        }
    }

    if (cont1 > 0)
        printf("Media de peso (1 a 10 anos): %.2lf\n", soma1 / cont1);
    else
        printf("Nao ha pessoas na faixa de 1 a 10 anos.\n");

    if (cont2 > 0)
        printf("Media de peso (11 a 20 anos): %.2lf\n", soma2 / cont2);
    else
        printf("Nao ha pessoas na faixa de 11 a 20 anos.\n");

    if (cont3 > 0)
        printf("Media de peso (21 a 30 anos): %.2lf\n", soma3 / cont3);
    else
        printf("Nao ha pessoas na faixa de 21 a 30 anos.\n");

    if (cont4 > 0)
        printf("Media de peso (maiores de 31 anos): %.2lf\n", soma4 / cont4);
    else
        printf("Nao ha pessoas maiores de 31 anos.\n");

    return 0;
}

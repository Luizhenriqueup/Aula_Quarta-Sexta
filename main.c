#include <stdio.h>
// recebe 2 numeros inteiros soma e da a média no final //
int main()
{
    int num;
    int num1;
    int soma;
    float media;
    printf("Informe um numero:\n");
    scanf("%d", &num);
    printf("informe outro numero\n");
    scanf("%d", &num1);
    soma = num + num1;
    printf("Soma dos numeros: %d\n", soma);
    media= (soma) /2.0;
    printf ("media dos numeros informados %.2f\n", media);

    return 0;
}
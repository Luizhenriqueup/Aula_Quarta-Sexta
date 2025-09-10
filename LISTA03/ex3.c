#include <stdio.h>

int main() {
    int i= 1, x, y;
    int resultado = 1;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    for (i = 1; i <= y; i++) {
        resultado = resultado * x;
    }

    printf("%d elevado a %d = %d\n", x, y, resultado);

    return 0;
}

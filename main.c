#include <stdio.h>
int main()
{
    char v1, v2, v3;
    printf("informe o primeiro caracter:");
    scanf("%c", &v1);
    printf("informe o segundo caracter:");
    scanf(" %c", &v2);
    printf("informe o terceiro caracter:");
    scanf(" %c",&v3);
    printf("caracteres informados: %c %c %c\n", v1, v2, v3);

    return 0;
}

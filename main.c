#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int x;
    printf("informe um numero para letra a:");
    scanf("%d", &a);
    printf("informe um numero para letra b:");
    scanf("%d", &b);
    printf("informe um numero para letra c:");
    scanf("%d", &c);
    x = 2 * ((a - c)/8) - 5 * b;
    printf("valor de x: %d\n", x);







    return 0;
}

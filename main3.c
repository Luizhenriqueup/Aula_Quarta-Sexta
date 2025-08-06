#include <stdio.h>
int main ()
{
    //INFORME O PREÇO DE UM PRODUTO, E NO FINAL O PREÇO SAI COM 9% DE DESCONTO//
    double num;
    printf ("Informe o preco do produto:");
    scanf ("%lf", &num);
    num = num * 0.91;
    printf("preco do produto com desconto de 9%%: %.2f\n", num);



    return 0;
}

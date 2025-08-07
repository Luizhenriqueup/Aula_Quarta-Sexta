#include <stdio.h>
int main()
{
 int num;
 int num1;
 double soma;
 double multiplicacao;
 double divisao;
 double resto;
 printf("informe um numero");
 scanf("%d", &num);
 printf("informe outro numero");
 scanf("%d", &num1);
 soma = num + num1;
 multiplicacao = num - num1;
 divisao = num / num1;
 resto = num % num1;
 printf("soma: %lf\n", soma);
 printf("multiplicacao: %lf\n", multiplicacao);
 printf("divisao: %lf\n", divisao);
 printf("resto: %lf\n", resto);









    return 0;
}

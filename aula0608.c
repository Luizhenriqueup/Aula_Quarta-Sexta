#include <stdio.h>
int main ()
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

//Implemente um algoritmo em C que lê 2 números inteiros não nulos,
//calcula e escreve o resultado da soma, da multiplicação, da
//subtração, da divisão e do resto da divisão do primeiro pelo segundo
//número



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
//Implemente um algoritmo em C que recebe como entrada três
//números reais informados pelo usuário (a, b e c), calcula e escreve o
//resultado da expressão x = 2 * ( ( a – c ) / 8 ) – b * 5

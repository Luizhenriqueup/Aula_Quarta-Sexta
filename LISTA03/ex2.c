#include <stdio.h>
int main()
{
   double i, cont = 1, valor, maior, menor, soma=0;
   for (i = 1; cont <=10; cont++){
   printf("informe o %.2lf valor inteiro positivo:", cont);
   scanf("%lf", &valor);
   if(i == 1){
    maior = menor = valor;
   }
   else{
    if (valor > maior)
    maior = valor;
    if (valor < menor)
    menor = valor;
   }
   soma += valor;

   }
   printf("maior valro eh: %.2lf\n", maior);
   printf("menor valor eh: %.2lf\n", menor);
   printf("media dos numeros eh: %.2lf\n", soma/10);



    return 0;
}
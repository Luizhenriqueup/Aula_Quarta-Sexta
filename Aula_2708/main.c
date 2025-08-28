#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   /*double peso, altura, imc;
   printf("informe o seu peso:");
   scanf("%lf", &peso);
   printf("informe a sua altura:");
   scanf("%lf", &altura);
   imc = peso/ (altura*altura);
   printf("imc: %.2lf\n", imc);
   if(imc < 18.5){
   printf("magreza!\n");
   }
else if(imc >= 18.5 && imc < 24.9){
    printf("Peso normal!\n");
}
else{
    printf("obesidade");
}
*/
  /*int opcao;
  double preco, preco_paga;
  printf("informe o preco do produto:");
  scanf("lf", &preco);
  printf("1 - A vista, em dinheiro ou cheque\n 2 - vezes no cartao\n 3 - Em duas vezes sem juros\n 4 - Em duas vezes com juros\n");
  scanf("%d", &opcao);
  if (opcao == 1){
    preco_paga = preco - preco *0.1;
    printf("valor a ser pago: %2.lf\n", preco_paga);
  }
  else if(opcao == 2){
    preco_paga = preco - preco*0.15;
    printf("valor a ser pago: %2.lf\n", preco_paga);
  }
  else if(opcao = 3){
    preco_paga = preco / 2;
    printf("valor a ser pago: %2.lf\n", preco_paga);
  }
  else if(opcao = 4){
    preco_paga = (preco + preco *0.1) / 2;
    printf("valor a ser pago: %2.lf\n", preco_paga);
  }
  else{
    printf("erro");
  }*/




  double a, b, c, delta, x1, x2;
  printf("informe um valor a:");
  scanf("%lf", &a);
  printf("informe um valor b:");
  scanf("%lf", &b);
  printf("informe um valor c:");
  scanf("%lf", &c);
  delta = b*b - 4*a*c;
  if (delta < 0){
    printf("nao existem raizes reais");
  }
  else if(delta == 0){
    x1 = -b/(2*a);
    printf("ha apenas uma raiz real: %.2lf", x1);
  }
  else{
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    printf("raizes reais: %.2lf, %.2lf", x1, x2);
  }



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int i;
  double a, b, c, media;
  printf("informe um valor para i:");
  scanf("%d", &i);
  printf("agora informe um valor para A, B, C:");
  scanf("%lf %lf %lf", &a, &b, &c);
  if (i % 2 == 0){
     media = (a + b + c) / 3.0;
     printf("o valor i informado e par, entao a media dos numeros de a:%.2lf b:%.2lf c:%.2lf sao:%.2lf", a, b, c, media);
  }
  else if (i > 10){
     media = (a*2 + b*3 + c*4) / 9.0;
     printf("o valor de i informado e impar e maior q 10 ouse seja, esses sao os valores ponderados de a:%.2lf b:%.2lf c:%.2lf eh %.2lf", a, b, c, media);
  }
  else{
    printf("erro");
  }


    return 0;
}
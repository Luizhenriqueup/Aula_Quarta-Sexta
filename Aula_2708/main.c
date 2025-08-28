#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  /*int dia;
  printf("informe um dia da semana de 1 a 7:");
  scanf("%d", &dia);
  switch (dia){
  case 1: {
  printf("domingo\n");
  break;
  }
  case 2: {
    printf("sabado\n");
    break;
  }
  case 3:{
      printf("sexta\n");
      break;
  }
  case 4: {
  printf("quinta\n");
  break;
  }
  case 5:{
  printf("quarta\n");
  break;
  }
  case 6:{
  printf("terça\n");
  break;
  }
  case 7:{
  printf("segunda\n");
  break;
  }
  default: {
  printf("erro"); }*/


  /*char conceito;
  printf("informe o teu conceito de A, B, C, D:");
  scanf("%c", &conceito);
  switch(conceito){

  case 'a':{
      printf("exelente");
      break;}
  case 'b':{
      printf("bom");
      break;}
  case 'c':{
    printf("regular");
    break;}
  case 'd':{
    printf("reprovado");
    break;}
  default:{
      printf("erro");}
}*/





char operador;
double a, b;
printf("digita o valor q voce quer calcular:");
scanf("%lf %lf", &a, &b);
printf("me indica um operador:");
scanf(" %c", &operador);
switch(operador){
case '+': {
printf("%.2lf %c %.2lf = %.2lf", a, operador, b, (a+b));
break;
}
case '-': {
printf("%.2lf %c %.2lf = %.2lf", a, operador, b, (a-b));
break;
}
case '/': {
printf("%.2lf %c %.2lf = %.2lf", a, operador, b, (a/b));
break;
}
case '*': {
printf("%.2lf %c %.2lf = %.2lf", a, operador, b, (a*b));
break;
}


}













    return 0;
}

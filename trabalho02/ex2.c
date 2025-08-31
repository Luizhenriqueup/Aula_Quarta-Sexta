#include <stdio.h>
#include <stdlib.h>
int main ()
{
  double altura, base, perimetro, area;
  printf("informe um valor para altura de um retangulo:");
  scanf("%lf", &altura);
  printf("agora me informe um valor para a base desse retangulo:");
  scanf("%lf", &base);
  if (altura == base){
    printf("QUADRADO!");
  }
  else{
    perimetro = 2 * (base + altura);
    area = base * altura;
    printf("o perimetro eh %.2lf", perimetro);
    printf("a area eh %.2lf", area);
  }

    return 0;
}
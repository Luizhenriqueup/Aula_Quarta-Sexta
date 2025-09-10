#include <stdio.h>

int main() {
   double cont = 1, idade, peso, homens = 0, mulheres = 0;
   double somaidadeh = 0, somapesom = 0;
   char sexo;

   for (cont = 1; cont <=10; cont++){
    printf("qual o sexo da pessoa M OU F:", cont);
    scanf(" %c", &sexo);
    printf("qual a idade da pessoa:", cont);
    scanf("%lf", &idade);
    printf("qual o peso da pessoa:", cont);
    scanf("%lf", &peso);

    switch(sexo){
        case 'm': case 'M': homens++; somaidadeh += idade; 
        break;
        case 'f': case 'F': mulheres++; somapesom += peso;
        break;
        default: printf("sexo invalido");
    }
   }
    printf("quantidade de homens eh: %.2lf\n", homens);
    printf("quantidade de mulheres eh:%.2lf\n", mulheres);
    printf("a media de idade dos homens citados eh: %.2lf\n", somaidadeh/homens);
    printf("a media de peso das mulheres eh: %.2lf\n", somapesom/mulheres);


    return 0;
}

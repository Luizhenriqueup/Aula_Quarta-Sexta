#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double salario, reajuste, abono = 100;
    printf("informe o seu salario:");
    scanf("%lf", &salario);
    reajuste = salario + salario * 0.05;
    if (reajuste <= 750.00){
        reajuste += abono;
        printf("Parabens o o seu salario reajustado a 5%% com o abono de 100 foi para: %.2lf salario", reajuste);
    }
    else{
        printf("o seu salario reajustado apenas em 5%% sem o abono sera de: %.2lf", reajuste);
    }
    



    return 0;
}
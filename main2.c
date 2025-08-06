#include <stdio.h>
int main()
{
    //INDICA UM SALARIO E REAJUSTA A 1%//
    double num;
    double porcentagem;
    printf("informe o seu saldo da conta:");
    scanf("%lf", &num);
    porcentagem = num * 0.01;
    num = num + porcentagem;
    printf("Seu saldo reajustado a 1%% é: %.2f\n", num);
    
    return 0;


}
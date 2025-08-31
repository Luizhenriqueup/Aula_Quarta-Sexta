#include <stdio.h>
#include <stdlib.h>

int main(){
    double n1, n2, resultado;
    int opcao;

    printf("Informe um numero: ");
    scanf("%lf", &n1);

    printf("Informe outro numero: ");
    scanf("%lf", &n2);

    printf("O que voce quer fazer com esses numeros?\n1- soma de 2 numeros?\n2- diferenca entre 2 numeros(maior pelo menor)\n3- produto entre 2 numeros?\n4- divisao entre 2 numeros(o denominador nao pode ser 0)\n");
    scanf("%d", &opcao);

    if (opcao == 1){
        resultado = n1 + n2;
        printf("voce escolheu a opcao 1: a soma dos numeros sao: %.21f", resultado);
    }
    else if (opcao == 2){
        if (n1 > n2)
            resultado = n1 - n2;
        else
            resultado = n2 - n1;
        printf("voce escolheu a opcao 2: a diferenca entre os numeros sao: %.21f", resultado);
    }
    else if (opcao == 3){
        resultado = n1 * n2;
        printf("voce escolheu a opcao 3: o produto dos numeros sao: %.21f", resultado);
    }
    else if (opcao == 4){
        if (n2 != 0){
            resultado = n1 / n2;
            printf("voce escolheu a opcao 4: a divisao dos dois numeros sao: %.21f", resultado);
        }
        else{
            printf("voce escolheu a opcao 4: mas o domoniador eh 0\n erro!");
        }
    }
    else{
        printf("opcao invalida");
    }

    return 0;
}

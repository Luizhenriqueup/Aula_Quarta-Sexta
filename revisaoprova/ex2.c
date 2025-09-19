// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int op;
    double num1, num2, resultado;
    printf("informe um numero:");
    scanf("%lf", &num1);
    printf("informe outro numero:");
    scanf("%lf", &num2);
    while (op != 6){
    printf("==escolhe umas das opcoes que voce quer fazer com os numeros informados!===\n");
    printf("1. somar\n");
    printf("2. vezes\n");
    printf("3. subtracao\n");
    printf("4. divisao\n");
    printf("5. informar novos numeros!\n");
    printf("6. digite 6 para sair!\n");
    scanf("%d", &op);
    switch(op){
        case 1:
        resultado = num1 + num2;
        printf("a soma dos numeros informados eh %.2lf\n", resultado);
        break;
        case 2:
        resultado= num1 * num2;
        printf("a multiplicacao dos numeros informados eh: %.2lf\n", resultado);
        break;
        case 3:
        resultado = num1 - num2;
        printf("a subtracao dos numeros informados eh: %.2lf\n", resultado);
        break;
        case 4:
        if(num2 == 0){
            printf("erro o numero 2 é igual a 0 tente novamente\n");
            printf("digita novamente o numero 2 aqui que não seja 0:\n");
            scanf("%lf", &num2);
        }
        else if(num2 > 0 ){
            resultado = num1 / num2;
            printf("a divisao entre os dois numeros eh: %.2lf\n", resultado);
        }
        break;
        case 5:
        printf("informe um novo numero!\n:");
        scanf("%lf", &num1);
        printf("informe um novo segundo numero!:\n");
        scanf("%lf", &num2);
        break;
        case 6:
        printf("você saiu do programa!!");
        break;
        default:
        printf("erro somente opcao 1, 2, 3, 4, 5 sao validos");
    }
        
    }
        
    

    return 0;
}

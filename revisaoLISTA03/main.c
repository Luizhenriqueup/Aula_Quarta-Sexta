#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*double cont, valor, maior, menor, soma=0;
    for(cont = 1; cont<=10; cont++){
        printf("informe um valor inteiro positivo");
        scanf("%lf", &valor);
        if (cont == 1){
            maior = valor;
            menor = valor;
            }
        else if (maior < valor){
            maior = valor;
        }
        else if (menor > valor){
            menor = valor;
        }
        soma += valor;

    }
    printf("o maior valor citado eh: %lf", maior);
    printf("o menor valor citado eh: %lf", menor);
    printf("a media dos numeros citados eh: %lf", soma/10);*/



    /*double i, x, y, resultado =1;
    printf("informe um valor para x");
    scanf("%lf", &x);
    printf("Informe um valor para y");
    scanf("%lf", &y);
    for (i=1; i<=y; i++){
    resultado = resultado * x;
    }
    printf("%lf elevado a %lf = %lf", x, y, resultado);*/



    /*double num1, num2, resultado;
    int opcao = 0;
    while (opcao!=5){
        printf("escolha uma opcao\n");
        printf("1-somar\n");
        printf("2-divisao\n");
        printf("3-multiplicao\n");
        printf("4-subtracao\n");
        printf("5- digita 5 para sair\n");
        scanf("%d", &opcao);
        switch(opcao){
        case 1:
        printf("digita o primeiro valor:");
        scanf("%lf", &num1);
        printf("digita o segundo valor:");
        scanf("%lf", &num2);
        resultado = num1 + num2;
        printf("a soma dos numeros %lf mais %lf eh: %lf\n", num1, num2, resultado);
        break;

        case 2:
        printf("digita o primeiro valor:");
        scanf("%lf", &num1);
        printf("digita o segundo valor:");
        scanf("%lf", &num2);
        if (num2 != 0){
            resultado = num1 / num2;
            printf("a divisao dos numeros %lf e %lf eh: %lf\n", num1, num2, resultado);
            }
         else{
            printf("erro divisao com 0!");
            break;
        }
        case 3:
        printf("digita o primeiro valor:");
        scanf("%lf", &num1);
        printf("digita o segundo valor:");
        scanf("%lf", &num2);
        resultado = num1 * num2;
        printf("a multiplicao dos numermos %lf e %lf eh: %lf\n", num1, num2, resultado);
        break;

        case 4:
        printf("digita o primeiro valor:");
        scanf("%lf", &num1);
        printf("digita o segundo valor:");
        scanf("%lf", &num2);
        resultado = num1 - num2;
        printf("a subtracao do valor %lf e %lf eh: %lf\n", num1, num2, resultado);
        break;

        case 5:
        printf("voce saiu.");

        default: printf("opcao invalida\n");
        }

        }*/


        /*double i, idade, peso, soma1=0, soma2=0, soma3=0, soma4=0;
            for(i=1; i<=3; i++){
            printf("digite a idade da pessoa:");
            scanf("%lf", &idade);
            printf("digite o peso da pessoa:");
            scanf("%lf", &peso);
            if (idade >=1 && idade <=10){
                soma1 += peso;
            }
            else if (idade >=11 && idade <= 20){
            soma2 += peso;
            }
            else if (idade >=21 && idade <= 30){
                soma3 += peso;
            }
            else if (idade >=31){
                soma4 += peso;
            }

        }
        printf("a media de pesos das pessoas de 1 a 10 anos eh: %lf\n", soma1/15);
        printf("a media de pesos da pessoas de 11 a 20 anos eh: %lf\n", soma2/15);
        printf("a media de pesos da pessoas de 21 a 30 eh: %lf\n", soma3/15);
        printf("a media de pesos das pessoas com mais de 31 anos eh: %lf\n", soma4/15);*/



        double valor, soma, media, cont=0;
        printf("informe varios valores inteiros! digite -99 para parar:");
        while(1){
            scanf("%lf", &valor);
            if (valor == -99){
                break;
            }
        }



    return 0;
}

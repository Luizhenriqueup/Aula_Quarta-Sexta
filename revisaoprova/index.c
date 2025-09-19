#include <stdio.h>
#include <stdlib.h>

int main()
{
double nota, media=0, maior=0, menor=0;
int op, i=0;
while (op!=5)
{
printf("=====Escolha uma das opcoes====\n");
printf("1.informe a nota:\n");
printf("2.media das notas\n");
printf("3 a maior nota:\n");
printf("4. a menor nota:\n");
printf("5. para sair\n");
scanf(" %d", &op);

switch(op){
    case 1:
    printf("informe a sua nota!:");
    scanf("%lf", &nota);
    if(nota > 10 || nota <0){
        printf("o sistema nao aceita essa nota\n");
    }
    else{
        i++;
        media+=nota;
        if(i==1){
            maior=nota;
            menor = nota;
        }
        else{
                if(maior < nota){
                maior = nota;
            }
                else if(menor > nota){
                menor = nota;
        }
        }
    }
    break;
    case 2:
    if(i==0){
        printf("Sem nota no sistema!\n");
    }
    else{
        printf("a media de notas lançadas eh %.2lf\n", (media/i));
    }
    break;
    case 3:
    if(i==0){
        printf("sem nota no sistema\n");
    } 
        printf("a maior nota eh: %.2lf\n", maior);
        break;
        case 4:
    if(i==0){
        printf("sem nota no sistema\n");
    }
        printf("a menor nota eh: %.2lf\n", menor);
        break;
        case 5:
        printf("você saiu do programa");
    
}







        

}







return 0;
}

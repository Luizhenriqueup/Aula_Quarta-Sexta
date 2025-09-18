#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int opcao;
    printf("digite um codigo de um produto 1 a 4:");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:  {
    printf("alimento nao-perecivel!");
    break;
           }
    case 2: {
    printf("alimento perecivel!");
    break;
    }
    case 3: {
    printf("vestuario!");
    break;
    }
    case 4: {
    printf("limpeza!");
    break;
    */



    /*double ra, nota1, nota2, nota3, nota4, media;
    printf("digite o ra do aluno:");
    scanf("%lf", &ra);
    printf("digite a primeira nota do aluno:\n");
    scanf("%lf", &nota1);
    printf("digite a segunda nota do aluno:\n");
    scanf("%lf", &nota2);
    printf("digite a terceira nota do aluno:\n");
    scanf("%lf", &nota3);
    printf("digite a quarta nota:\n");
    scanf("%lf", &nota4);
    media = (nota1+nota2*2+nota3*3+nota4)/7 ;
    if(media>=90){
        printf("Aprovado! voce tirou A");
    }
    else if(media>=75 && media <90){
        printf("Aprovado! Voce tirou B");
    }
    else if(media>=60 && media <75){
        printf("Aprovado! Voce tirou C");
    }
    else if(media>=40 && media <60){
        printf("Reprovado! Voce tirou D");
    }
    else if(media<40){
        printf("reprovado! Voce tirou E");
    }*/


        double tinto=0, branco=0, rose=0, total;
        char tipo;
            printf("digite qual vinho tem na adega T para tinto, B para branco e R para rose:\n");
            printf("digita F para sair!\n");
                while(tipo != 'f' && tipo != 'F'){
                printf("tipo:");
                scanf(" %c", &tipo);
                    switch(tipo){
                    case 'T':
                    case 't':
                    tinto++;
                    total++;
                    break;
                    case 'b':
                    case 'B':
                    branco++;
                    total++;
                    break;
                    case 'r':
                    case 'R':
                    rose++;
                    total++;
                    break;
                    case 'f':
                    case 'F':
                    printf("voce saiu do programa! esse eh os totais de vinhos\n");
                    break;
                    default:
                    printf("entrada invalida");
                    }
                        }
                        printf("total de vinhos tinto %.0lf\n", tinto);
                        printf("total de vinhos branco %.0lf\n", branco);
                        printf("total de vinhos rose %.0lf\n", rose);
                        printf("total de vinhos na adega %.2lf\n", total);









    return 0;
}

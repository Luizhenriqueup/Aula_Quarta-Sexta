#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    /*EX1

    int matriz [3][3];
    for(int i=0; i<3; i++){
        for (int y=0; y<3; y++){
            matriz[i][y]=i+y;
        }
    }
    printf("elemento M[1][2]: %d\n", matriz[1][2]);*/



    /* EX2
    int matriz[4][4],soma=0;

    printf("Matriz:\n\n");
    for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                matriz[i][j]=i+j;
                printf("[%d]",matriz[i][j]);
            }
            printf("\n");

    }

    for(int i=0;i<4;i++){
        soma = soma + matriz[i][i];
    }

    printf("\nSoma da diagonal eh:%d\n",soma);*/





    /* EX3
    int matriz[2][3],a=0;
    printf("matriz normal\n");
    for (int i=0; i<2; i++){
        for (int y=0; y<3; y++){
            matriz[i][y]=a++;
            printf("[%d]", matriz [i][y]);

        }
        printf("\n");
    }
    printf("matriz invertida\n");
    for (int i=0; i<3; i++){
        for (int y=0; y<2; y++){
        printf("[%d]", matriz [y][i]);
    }
    printf("\n");
}*/




    /* EX 4
    void imprimir_saudacao(char*nome){
    printf("olá, %s! bem-vindo(a)\n", nome);
    }
    int main(){
    char nome_usuario[20];
    printf("digite seu nome:");
    scanf("%50s", nome_usuario);
    imprimir_saudacao(nome_usuario);
    return 0;*/


    int eh_par(int num){
    return(num % 2 == 0);
   }
   int main(){
   int numero;
   printf("digite um numero:");
   if(scanf("%d", &numero) !=1){
    printf("erro");
   return 1;
   }
   if(eh_par(numero)){
    printf("%d e par", numero);
   }else{
   printf("%d e impar", numero);
   }
    return 0;
}









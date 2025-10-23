#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_VETOR 9
#define QUANTIDADE_LEITOR 8
int main()
{
    int vetor[TAMANHO_VETOR];
    int i;
    printf("Leitura %d valores\n", QUANTIDADE_LEITOR);
    for(i = 0; i < QUANTIDADE_LEITOR; i++){
        printf("Digite o %d valor (%d)", i + 1, i);
        if(scanf("%d", &vetor[i])!=1){
            printf("erro na leitura. Finalizando o programa. \n");
        }
    }
    printf("\n impressao dos valores na ordem inversa da leitura\n");
    for (i= QUANTIDADE_LEITOR - 1; i >= 0; i--){
        printf("posicao %d: %d\n", i, vetor[i]);
    }




    
    return 0;
}


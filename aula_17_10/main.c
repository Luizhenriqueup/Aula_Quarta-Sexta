#include <stdio.h>
#include <stdlib.h>
#define turma 3
#define notas 5

int main()
{
    /*int notas[3][3] = {1, 2, 3, 4, 5, 6};

    printf("Matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", notas[i][j]);
        }
        printf("\n");
    }*/


    /*int matriz[LINHAS][COLUNAS];
    int i,j;
    printf("\n matriz e seus indices\n");
    for (i=0; i<LINHAS;i++){
    for (j=0; j<COLUNAS;j++){
        printf("(%d,%d)", i,j);
    }
    printf("\n");
    }*/


   int turma, notas;
    int i, j;
    float soma = 0, media;

    printf("Informe a quantidade de turmas: ");
    scanf("%d", &turma);

    printf("Informe a quantidade de alunos por turma: ");
    scanf("%d", &notas);

    float matriz[turma][notas]; // matriz para armazenar as notas

    // Entrada das notas
    for (i = 0; i < turma; i++) {
        printf("\n=== Turma %d ===\n", i + 1);
        soma = 0; // zera soma para cada turma

        for (j = 0; j < notas; j++) {
            printf("Informe a nota do aluno %d: ", j + 1);
            scanf("%f", &matriz[i][j]);
            soma += matriz[i][j];
        }

        media = soma / notas;
        printf("Media da turma %d: %.2f\n", i + 1, media);
    }

    printf("\nFim do programa.\n");
    return 0;
}

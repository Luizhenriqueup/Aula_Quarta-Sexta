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


    int matriz[turma][notas];
    int i,j;
    printf("informe as notas dos alunos:");
    scanf("%d", &j);
    printf("qual turma é o aluno?");
    scanf("%d", &i);
    for(i=0; i<turma; i++){
    for (j=0; j<notas;j++){
    printf("\n");
    }
    }
    printf()




    return 0;
}

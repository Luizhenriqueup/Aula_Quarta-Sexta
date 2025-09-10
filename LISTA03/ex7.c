#include <stdio.h>

int main() {
    char tipo;
    int tinto = 0, branco = 0, rose = 0, total = 0;

    printf("Qual vinho tem no estoque:\n T para tinto\n B para branco\n R para rose\n Sair digita F\n");

    while (tipo != 'f' && tipo != 'F') {
        printf("Tipo: ");
        scanf(" %c", &tipo); 

        switch (tipo) {
            case 'T':
            case 't':
                tinto++;
                total++;
                break;
            case 'B':
            case 'b':
                branco++;
                total++;
                break;
            case 'R':
            case 'r':
                rose++;
                total++;
                break;
            default:
                printf("Entrada invalida! Use T, B, R ou F.\n");
        }
    }

    printf("Total de vinhos no estoque:\n");
    printf("Vinhos tintos : %d\n", tinto);
    printf("Vinhos brancos: %d\n", branco);
    printf("Vinhos rose   : %d\n", rose);
    printf("Total de vinhos: %d\n", total);

    return 0;
}

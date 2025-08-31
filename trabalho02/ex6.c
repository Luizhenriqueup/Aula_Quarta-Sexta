#include <stdio.h>

int main() {
    int prato, sobremesa, bebidas, cal = 0;
    printf("escolha um prato:\n");
    printf("1-vegetariano (180cal)\n");
    printf("2-peixe(230cal)\n");
    printf("3-frango(250cal)\n");
    printf("4-carne(350cal)\n");
    scanf("%d", &prato);
    if (prato == 1){
        cal += 180;
    }
    else if (prato == 2){
        cal += 230;
    }
    else if (prato == 3){
        cal += 250;
    }
    else if (prato == 4){
        cal += 350;
    }
    else{
        printf("opcao invalida!");
    }
    printf("agora informe a sobremesa:\n");
    printf("1-abacaxi(75cal)\n");
    printf("2-sorvete diet(110cal)\n");
    printf("3-mousse diet(170cal)\n");
    printf("4-mousse chocolate(200cal)\n");
    scanf("%d", &sobremesa);
    if(sobremesa == 1){
        cal += 75;
    }
    else if (sobremesa == 2){
        cal += 110;
    }
    else if (sobremesa == 3){
        cal += 170;
    }
    else if (sobremesa == 4){
        cal += 200;
    }
    else{
        printf("opcao invalida!");
    }
    printf("agora me infomrma a bebida:\n");
    printf("1-cha(20cal)\n");
    printf("2-suco de laranja(70cal)\n");
    printf("3-suco de melao(100)\n");
    printf("4-refrigerante(65)\n");
    scanf("%d", &bebidas);
    if(bebidas == 1){
        cal += 20;
    }
    else if (bebidas == 2){
        cal += 70;
    }
    else if (bebidas == 3){
        cal += 100;
    }
    else if (bebidas == 4){
        cal += 65;
    }
    else{
        printf("opcao invalida!");
    }
    printf("Pelas suas escolhas o total de calorias consumida foi: %d cal", cal);


    

    
    
    



    return 0;
}
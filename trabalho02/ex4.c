#include <stdio.h>
#include <math.h>

int main() {
     int h, m, entrada, saida, duracao, horas;
     double valor = 0;
     printf("informe sua hora de entrada em horas e minutos:");
     scanf("%d %d", &h, &m);
     entrada = h * 60 + m;
     printf("Agora me informa a sua hora de saida em horas e minutos:");
     scanf("%d %d", &h, &m);
     saida = h * 60 + m;
    if (saida < entrada)
    saida += 24 * 60;
    duracao = saida - entrada;
    horas = (int) ceil(duracao / 60.0);

    if (horas <= 2)
    valor = horas * 1.0;
    else if (horas <= 4) valor = 2 + (horas - 2) * 1.40;
    else valor = 2 + 2 * 1.40 + (horas - 4) * 2.0;

    printf("Voce ficou %d hora(s).\n", horas);
    printf("Total a pagar: R$ %.2f\n", valor);

    return 0;
}
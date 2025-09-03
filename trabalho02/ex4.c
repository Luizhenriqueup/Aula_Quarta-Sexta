#include <stdio.h>

int main() {
    int hChegada, mChegada, hPartida, mPartida;
    int chegadaMin, partidaMin, tempoMin, horas;
    float valor = 0;

    printf("Digite hora e minuto da chegada: ");
    scanf("%d %d", &hChegada, &mChegada);

    printf("Digite hora e minuto da partida: ");
    scanf("%d %d", &hPartida, &mPartida);

  
    chegadaMin = hChegada * 60 + mChegada;
    partidaMin = hPartida * 60 + mPartida;


    if (partidaMin < chegadaMin) {
        partidaMin += 24 * 60;
    }


    tempoMin = partidaMin - chegadaMin;


    horas = (tempoMin + 59) / 60;


    if (horas <= 2) {
        valor = horas * 1.0;
    } else if (horas <= 4) {
        valor = 2 * 1.0 + (horas - 2) * 1.4;
    } else {
        valor = 2 * 1.0 + 2 * 1.4 + (horas - 4) * 2.0;
    }

    printf("Tempo estacionado: %d horas\n", horas);
    printf("Valor a pagar: R$ %.2f\n", valor);

    return 0;
}

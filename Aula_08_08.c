#include <stdio.h>

int main()
{
    double raio;
    double perimetro;
    double area;
    printf("informe um valor do raio para descobrirmos o perimetro e a area do circulo:");
    scanf("%lf",&raio);
    perimetro = 2 * raio * 3.14;
    area = (raio*raio) * 3.14;
    printf("\nPerimetro: %.2lf\nArea: %.2lf\n\n",perimetro, area);
    return 0;

    ===========================================================================================

    double raio;
    double perimetro;
    double area;
    printf("informe um valor do raio para descobrirmos o perimetro e a area do circulo:");
    scanf("%lf",&raio);
    perimetro = 2 * raio * 3.14;
    area = (raio*raio) * 3.14;
    printf("\nPerimetro: %.2lf\nArea: %.2lf\n\n",perimetro, area);
    return 0;

    ===========================================================================================

    double numero;
    printf("Informe o valor da sua conta:");
    scanf("%lf",&numero);
    numero = (numero * 4)/100;
    printf("4 por cento do seu valor em reais e:%lf",numero);
    return 0;

    ===========================================================================================

    int V1,V2,V3,VF;
    printf("informe a seguir a nota das avaliações do aluno Pedrinho\n\nNota V1:");
    scanf("%d",&V1);
    printf("\nNota V2:");
    scanf("%d",&V2);
    printf("\nNota V3:");
    scanf("%d",&V3);
    VF = (V1 + V2 + V3)/3;
    printf("\nFinal do trimestre:\n\nNota V1:%d\n\nNota V2:%d\n\nNota V3:%d\n\nMedia final:%d\n\n",V1,V2,V3,VF);
    return 0;

    ===========================================================================================

    double V1,V2,V3,VF;
    printf("informe a seguir a nota das avaliações do aluno Pedrinho\n\nPeso da V1 = 2.00 V2 = 3.00 V3 = 3.50\n\nNota V1:");
    scanf("%lf",&V1);
    printf("\nNota V2:");
    scanf("%lf",&V2);
    printf("\nNota V3:");
    scanf("%lf",&V3);
    VF = ((V1*2.00) + (V2*3.00) + (V3*3.50))/(2.00 + 3.00 + 3.50);
    printf("\nFinal do trimestre:\n\nNota V1:%.2lf - Peso 2.00\n\nNota V2:%.2lf - Peso 3.00\n\nNota V3:%.2lf - Peso 3.50\n\nMedia final:%.2lf\n\n",V1,V2,V3,VF);
    return 0;

    ===========================================================================================

    double Km;
    double T;
    double Vm;
    printf("Informe a distancia percorrida em sua viagem em Km:");
    scanf("%lf",&Km);
    printf("\nAgora informe o tempo em Horas da viagem:");
    scanf("%lf",&T);
    Vm = Km / T;
    printf("\nA sua velocidade media foi de %.2lfKm/h\n\n",Vm);
    return 0;

    ===========================================================================================
        
    double fabrica;
    double consumidor;
    printf("Informe o custo de fabrica do carro:");
    scanf("%lf",&fabrica);
    consumidor = (fabrica*0.28) + (fabrica*0.45) + fabrica;
    printf("O custo do consumidor e: %.2lf",consumidor);
    return 0;

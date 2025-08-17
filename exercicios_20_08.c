#include <stdio.h>
#include <math.h>

int main()
{
    //O proprietário de uam empresa precisa de um programa de computador para
    //calcular o novo salário que seus funcionários irão receber a partir do mês que vem.
    //Sabendo que o aumento de salário para todos os funcionários será de 25%, escreva
    //um algoritmo que recebe o valor do salário atual do funcionário e informa o seu
    //novo salário acrescido de 25%
    

    double salario;
    printf ("informe o teu salario:");
    scanf("%lf", &salario);
    salario = salario + salario * 0.25;
    printf("o seu salario reajustado a 25%%: %.2lf\n", salario);







    
   
    //Um dos sócios da empresa descrita acima soube que você desenvolveu um algoritmo para o reajuste salarial para a empresa e pediu que você desenvolva um algoritmo similar.
    //Na verdade, ele gostaria que você acrescentasse ao programa anterior à possibilidade dele informar não somente o salário atual do funcionário, mas também o valor percentual
    //que deve ser incrementado para aquele funcionário, uma vez que ele aplicará valores percentuais de aumento diferentes para cada funcionário
    
    double salario, percentual, reajuste;
    printf ("informe o teu salario:");
    scanf("%lf", &salario);
    printf("informe o percentual q vai ser acrescentado:");
    scanf("%lf", &percentual);
    reajuste = salario * (percentual / 100);
    salario = salario + reajuste;
    printf("o seu salario reajustado a %% informado: %.2lf\n o reajuste no teu salario foi: %.2lf\n", salario, reajuste);





    //Desenvolva um algoritmo que recebe como entrada o ano de nascimento de uma
    //pessoa e o ano atual. O seu algoritmo deve mostrar a idade da pessoa em anos, a
    //idade da pessoa em meses e a idade da pessoa em dia


    double nascimento, atual, idade, messes, dias; 
    printf("informe o ano de nascimento:");
    scanf("%lf", &nascimento);
    printf("informe o ano atual:");
    scanf("%lf", &atual);
    idade = atual - nascimento;
    messes = idade * 12;
    dias = idade * 365;
    printf("voce tem %.0lf anos\n", idade);
    printf("voce tem %.0lf messes vividos\n", messes);
    printf("voce tem %.0lf dias vividos\n", dias); 



    
    //crie um algoritmo que recebe como entrada dois valores inteiros para as variáveis
    //A e B. O seu algoritmo deve efetuar a troca dos valores de forma que a variável
    //A passe a possuir o valor da variável B e a variável B passe a possuir o valor da
    //variável A. Por fim, o seu algoritmo deve imprimir o valor das variáveis A e B.

    int a, b, troca;
    printf("informe um valor para letra A:");
    scanf("%d", &a);
    printf("informe um valor para letra B:");
    scanf(" %d", &b);
    troca = a;
    a = b; 
    b = troca;
    printf("o valor da sua variavel A é: %.2d\n o valor da sua segunda variavel B é: %.2d\n", a, b);




    

    //Crie um algoritmo para realizar a conversão de valores informados em real (R$) para dólar (US$). O programa deve receber como entrada o valor em real e o valor da cotação
    //do dólar



    double real, cotacao, dolar;
    printf("informe um valor em real:");
    scanf("%lf", &real);
    printf("informe a cotacao do dolar:");
    scanf("%lf", &cotacao);
    dolar = real / cotacao;
    printf ("real convertido em dolar é: %.2lf", dolar); 






    //Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para
    //os quais fornece a quantidade de ração em gramas. A quantidade diária de ração
    //fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso
    //do saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre
    //quanto restará de ração no saco após cinco dias



    double peso, quantidade, dias, resto;
    printf("informe o peso do saco da racao em kg:");
    scanf("%lf", &peso);
    printf("informe a quantidade de racao fornecida para cada gato em gramas:");
    scanf("%lf", &quantidade);
    peso = peso * 1000;
    dias = quantidade * 2 * 5;
    resto = peso - dias;
    printf ("o resto que sobrou no saco apos 5 dias é: %.2lf em gramas", resto);




    






    return 0;
}

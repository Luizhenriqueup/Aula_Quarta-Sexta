#include <stdio.h>

#include <string.h> // para podermos usar "strien"
// codigo monolitico, sem protótipo, sem funções de apoio(void ou com retorno)
    float calcula_salario_liquido(float bruto, float descontos);
    float calcula_ferias(float meses_trabalhados);
    void emitir_holerite(char nome[] float bruto, float liquido, float dias_ferias); //procedimento(void)
    int validar_nome(char nome[]);

int main() {

  // Variáveis do Funcionário 1

  char nome[50] = "Maria Oliveira";
  float salario_base = 5000.00;
  float total_descontos = 1200.00;
  float meses_trabalhados = 8.5;
  float salario_liquido;
  float dias_ferias;

  printf("iniciando processo do holerite....\n");
  if(validar_nome(nome)){//#1
  salario_liquido=calcula_salario_liquido();//#2
  dias_ferias=calcula_ferias();//#3
  emitir_holerite();
  }else{
    printf("erro");
  }
  return 0;
  }
  // implementações dos módulos de funções
  //======================================
  // 1. função: retorna float
  float calcula_salario_liquido(float bruto, float descontos)(){
    float liquido=bruto-descontos;
    // garantir q o liquido não seja negativo
    return(liquido>0)? liquido:0.0;
  }
    //2 funcão retorna float
    float calcula_ferias(float meses_trabalhados){
        if(meses_trabalhados <12){// proporção meses/
            return(meses_trabalhados/12:0)*30;
        }else{
            // acima de 12 meses, ou 30 dias integrais(simplificar)
            return 30.0;
        }
    }
    // procedimento retorno void (apenas uma exibição)
    void emitir_holerite(char nome[] float bruto, float liquido, float dias_ferias){
         printf("\n========================================");

    printf("\n| HOLERITE - %s", nome);

    printf("\n========================================");

    printf("\n| Salário Bruto: R$ %19.2f |", bruto);

    printf("\n| Salário Líquido: R$ %17.2f |", liquido);

    printf("\n| Férias Acumuladas: %15.1f dias |", dias_ferias);

    printf("\n========================================\n");
    }
    //Desfio extra (4) função que retorna int (simulando booleano)
        //int  validar_nome(char nome[]){
        //usamos strien para conter o comprimento da string em C
        // queremos um if para o strien > que uma quantidade rasuavel
        // retorne 1 se verdadeiro e 0 caso falso
    }






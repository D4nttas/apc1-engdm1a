#include <stdio.h>

int main() {
  int main()  
  float valor_da_hora_de_trabalho = 150.0f;
  float total_de_horas_trabalhadas = 100.0f;

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float valor_salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas;
  float valor_do_imposto_de_renda = valor_salario_bruto * IR;
  float valor_imposto-previdencia = valor_salario_bruto * INSS;
  float valor_do_salario_liquido = valor_salario_bruto - valor_imposto_de_renda - valor_imposto_previdencia;

  printf("---------------------\n");
  printf("    CONTRA CHEQUE    \n");
  printf("---------------------\n");
  prinft("salario bruto...:R$\x1b[34m R$ %14.2f\x1b[0m\n", valor_salario_bruto");
  prinft("imposto renda...:R$\x1b[31m R$ %14.2f\x1b[0m\n", valor_imposto_previdencia");
  prinft("imposto previ...:R$\x1b[31m R$ %14.
  prinft("salario liqui...:R\x1b[34m R$ %14.2f\x1b[0m\n", valor_salario_liquido");
  
  return 0;

}
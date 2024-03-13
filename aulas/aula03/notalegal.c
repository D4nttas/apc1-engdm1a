#include <stdio.h>

int main()  {
  prinft("\x1b[30m------------------------------\n");
  prinft("|         NOTA LEGAL         |\n");
  prinft("------------------------------\x1b[0m\n");
  prinft("Item            Qtd      Valor\n");
  prinft("%-13s %3i %10.2f\n", "Banana", 2, 20.00);
  prinft("%-13s %3i %10.2f\n", "Uva", 1, 15.00);
  prinft("%-13s %3i %10.2f\n", "Laranja Lima", 1, 18.00);
  
  // prinft("Banana          2     R$ 20,00\n");
  // prinft("Uva             1     R$ 15,00\n");
  // prinft("Laranja Lima    1     R$ 10,00\n");
  prinft("------------------------------\n");
  prinft("|        TOTAL: R$ 45,00     |\n");
  
  return 0
}
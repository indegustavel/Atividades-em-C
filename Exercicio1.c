#include <stdio.h>

int main() {
 int numero = 42;
 int *ponteiro = &numero;

 printf("Valor da variável: %d\n", *ponteiro);
 printf("Endereco da variavel: %p\n", (void *)ponteiro);

 return 0;
}

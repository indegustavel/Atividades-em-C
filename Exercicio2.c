#include <stdio.h>


void swap(int *a, int *b) {
 int temp = *a;
 *a = *b;
 *b = temp;
}
int main() {
 int valor1 = 44, valor2 = 32;

 printf("Antes da troca: valor1 = %d, valor2 = %d\n", valor1, valor2);
 swap(&valor1, &valor2);
 printf("Depois da troca: valor1 = %d, valor2 = %d\n", valor1, valor2);

 return 0;
}

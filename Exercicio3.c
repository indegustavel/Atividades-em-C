#include <stdio.h>
#include <stdlib.h>

int main() {
 int n, i, soma = 0;
 float media;
 int *vetor;
 printf("Digite o tamanho do vetor: ");
 scanf("%d", &n);
 // Alocação dinâmica
 vetor = (int*) malloc(n * sizeof(int));
 if (vetor == NULL) {
 printf("Erro: Memória insuficiente!\n");
 return 1;
 }
 // Preenchimento do vetor
 for (i = 0; i < n; i++) {
 printf("Digite o valor %d: ", i+1);
 scanf("%d", &vetor[i]);
 soma += vetor[i];
 }
 media = (float)soma / n;
 printf("Soma: %d\nMédia: %.2f\n", soma, media);
 // Liberação da memória
 free(vetor);
 return 0;
}
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

typedef struct {
 int id;
 char nome[50];
 float notas[3];
 float media;
} Aluno;
int main() {
 int n, i, j;
 Aluno *turma;
 printf("Digite o número de alunos: ");
 scanf("%d", &n);
 turma = (Aluno*) malloc(n * sizeof(Aluno));
 if (turma == NULL) {
 printf("Erro: Memória insuficiente!\n");
 return 1;
 }
 // Leitura dos dados
 for (i = 0; i < n; i++) {
 turma[i].id = i + 1;
 printf("\nAluno %d:\n", i + 1);
 printf("Nome: ");
 scanf(" %[^\n]", turma[i].nome);
 turma[i].media = 0;
 for (j = 0; j < 3; j++) {
 printf("Nota %d: ", j + 1);
 scanf("%f", &turma[i].notas[j]);
 turma[i].media += turma[i].notas[j];
 }
 turma[i].media /= 3;
 }
 // Exibição dos resultados
 printf("\n--- Resultados ---\n");
 for (i = 0; i < n; i++) {
 printf("ID: %d | Nome: %s | Média: %.2f\n",
 turma[i].id, turma[i].nome, turma[i].media);
 }
 free(turma);
 return 0;
}
#include <stdio.h>
#include <stdlib.h> 
#include <stddef.h> 


typedef struct {
    int *dados;      
    int tamanho;   
    int capacidade;  
} VetorDinamico;

void inicializar(VetorDinamico *vetor) {
    vetor->tamanho = 0;
    vetor->capacidade = 4; 
    vetor->dados = (int *)malloc(vetor->capacidade * sizeof(int));
    if (vetor->dados == NULL) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }
}


void push_back(VetorDinamico *vetor, int elemento) {
    
    if (vetor->tamanho == vetor->capacidade) {
        
        vetor->capacidade *= 2;
        
        vetor->dados = (int *)realloc(vetor->dados, vetor->capacidade * sizeof(int));
        if (vetor->dados == NULL) {
            printf("Erro ao realocar memoria!\n");
            exit(1);
        }
    }
    
    vetor->dados[vetor->tamanho] = elemento;
    
    vetor->tamanho++;
}


int size(VetorDinamico *vetor) {
    return vetor->tamanho;
}


void destruir(VetorDinamico *vetor) {
    free(vetor->dados); 
    vetor->dados = NULL;    
    vetor->tamanho = 0;
    vetor->capacidade = 0;
}




int main() {
    VetorDinamico vetor;
    inicializar(&vetor);

    for (int i = 1; i <= 100; i++) {
        push_back(&vetor, i);

        
        if (i % 10 == 0) {
            
            printf("Apos %d insercoes: tamanho=%d, capacidade=%d\n",
                   i, size(&vetor), vetor.capacidade);
        }
    }

    destruir(&vetor);
    return 0;
}
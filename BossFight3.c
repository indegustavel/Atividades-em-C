#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p = (int*)malloc(sizeof(int));

    if (p == NULL) {
        printf("Falha ao alocar memória!\n");
        return 1; 
    }

    printf("Memória alocada com sucesso.\n");

    *p = 33;
    printf("Valor atribuído: %d\n", *p);



    printf("Liberando a memória (uma única vez).\n");
    free(p);

    p = NULL;

    printf("Programa finalizado corretamente.\n");
    return 0; 
}
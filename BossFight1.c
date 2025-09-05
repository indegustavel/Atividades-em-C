#include <stdio.h>
#include <stdlib.h>

void funcao() {
    int *p = (int*)malloc(sizeof(int));
    if (p == NULL) {
        return 0;
    }
    
    *p = 10;
    
    //Liberar a memória antes de sair da função
    free(p);
}
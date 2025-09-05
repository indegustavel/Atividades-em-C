#include <stdio.h>
#include <stdlib.h>


int main(void) { 

    int *p = (int*)malloc(sizeof(int));
    
    if (p == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    
    // Solução: Usar a memória ANTES de liberar
    *p = 20;
    
    printf("O valor armazenado é: %d\n", *p);

    free(p);
    
    p = NULL;

    return 0; 
}
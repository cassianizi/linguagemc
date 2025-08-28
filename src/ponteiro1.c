#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor = 10;
    int *pvalor = &valor;
    printf("o valor de %d\n" ,valor);
    printf("o valor de %p\n" ,pvalor);
    printf("=====================================================\n");
    printf("o numero da variavel valor é %d\n" ,valor);
    printf("o endereço da variavel valor %p" ,&valor);
    printf("o numero contido guardado no ponteiro é %p\n" *pvalor);
    printf("o endereço guardado no ponteiro é %p\n" ,pvalor);
    return 0;
}
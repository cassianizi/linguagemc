#include <stdio.h>
#include <stdlib.h>
#include "../lib/funcao3.h"

int main(){
    system("clear");
    cabecalho();
    int p = potencia(2,4);
    float juros = jurosSimples(500.00, 6.0);
    printf("O resultado da potencia é %d\n" ,p);
    printf("O resultado de juros é %.2f\n" ,juros);
    separador();
    return 0;
}
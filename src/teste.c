#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int valor;
    int qtd=0;
    int i;
    int vetor[99];
    printf("digite um valor\n");
    scanf("%d" ,&valor);
    while(valor >= 1 && valor <= 98 && qtd < 99){
        vetor[qtd] = valor;
        qtd++;
    printf("digite outro valor\n");
    scanf("%d" ,&valor);

    }
    
    printf("\n======== Valores digitados pelo usuario ===========\n");
    for(i = 0 ; i < qtd ; i++){
        printf("%d | ",vetor[i]);
    }
    printf("\n");

    return 0;
}
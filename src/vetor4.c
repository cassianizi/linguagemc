#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cleare");
    int valor;
    int qtd=0;
    int i;
    int vetor[qtd];
    printf("digite um valor\n");
    scanf("%d" ,&valor);
    while(valor != 99){
        vetor[qtd] = valor;
        qtd++;
    printf("digite outro valor\n");
    scanf("%d" ,&valor);
    
    }
}
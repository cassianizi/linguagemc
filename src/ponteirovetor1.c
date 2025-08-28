#include <stdio.h>
#include <stdlib.h>

int mais(){
    int idades[5] = {15, 18, 56, 41, 5};
    printf("%d - %p\n" ,idades[0], &idades[0]);
    printf("%d - %p\n" ,idades[1], &idades[1]);
    printf("%d - %p\n" ,idades[2], &idades[2]);
    printf("%d - %p\n" ,idades[3], &idades[3]);
    printf("%d - %p\n" ,idades[4], &idades[4]);
    printf("============for===============\n");
    int i;
    for(i = 0 ; i < 5 ; i++){
        printf("%d - %p\n" ,idades[i], &idades[i]);
    }
    printf("============ponteiro==============\n");
    //Vamos obter a posição de memoria do primeiro elemento do vetor
    //e atribuir potencia
}
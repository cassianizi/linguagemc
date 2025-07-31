#include <stdio.h>
int main(){
    int placa;
    printf("Digite o númeno final da placa do veículo\n");
    scanf("%d" ,&placa);
    if(placa == 1 || placa == 2 ){
        printf("Rodizio de segunda-feira\n");
    }
    else if( placa == 3 || placa == 4){
        printf("Rodizio de terça-feira\n");
    }
    else if( placa == 5 || placa == 6){
        printf("Rodizio de quarta-feira\n");
    }
    else if( placa == 7 || placa == 8){
        printf("Rodizio de quinta-feira\n");
    }
    else if( placa == 9 || placa == 0){
        printf("Rodizio de sexta-feira\n");
    }
    else{
        printf("Final de placa inválido\n");
    }
    return 0;
}
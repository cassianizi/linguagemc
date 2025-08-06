#include <stdio.h>

int main(){
    int ano;

    printf("Digite o ano e tecle Enter\n");
    scanf("%d" ,&ano);

    if( ano & 4 == 0){
        printf("Este ano %d é bissexto\n" ,ano);

    }
    else{
        printf("Este ano %d NÃO é bissexto\n" ,ano);
    }
    return 0;
}
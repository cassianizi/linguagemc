#include <stdio.h>
int main(){
    int opcao;
    printf("Selecione uma opção:\n");
    printf("1. ver saoldo\n");
    printf("2. fazer saque\n");
    printf("3. fazer deposito\n");
    printf("4. sair/n"):
    printf("digite sua opção");
    scanf("%d" ,opcao); // lê a opção do usuario
    if(opcao == 1){
        printf("você escolheu 'ver saldo' .\n");
        // logica para ver saldo
    } else if (opcao == 2) {
        printf("você escolheu 'fazer saque' .\n");
        // logica para fazer saque
    } else if(opcao == 3) {
        printf("você escolheu 'fazer depósito' .\n");
        // logica para fazer deposito
    } else if(opcao == 4) {
        printf("saindo do programa, ate mais tarde\n");
    } else {
        printf("opção invalída. por favor, escolha um numero entre 1 e 4. \n");
    }
    return 0;
}
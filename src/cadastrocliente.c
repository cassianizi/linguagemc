#include <stdio.h>
#include <stdlib.h>
#include "../lib/criararquivo.h"

//Vamos criar uma estrutura(strut) que
//representa p cliente, com seus respectivos
//dados.
struct Cliente{
    char nome[100];
    char email[100];
    int idade;
};

int main(){

    system("clear");
    //Vamos definir uma variavel do tipo struct de Cliente
    //assim podemos acessar as propriedades da estutura cliente
    struct Cliente cli;
    //scanf("%s" ,cli.nome);
    printf("digite o nome do cliente: \n");
    fgets(cli.nome,sizeof(cli.nome),stdin);

    printf("digite o email do cliente: \n");
    fgets(cli.email,sizeof(cli.email),stdin);

    printf("Digite a idade do cliente: \n");
    scanf("%d" ,&cli.idade);

    printf("%s - %s - %d anos\n" ,cli.nome, cli.email, cli.idade);

     //realizar a concatenação(junção de elementos distintos) para
    //gravar os dados de uma só vez

    char dados_cliente[100];
    char nome[30] = {"Nome:"};
    strcat(nome, cli.nome);
    strcat(dados_cliente, nome);

    char email[30] = {"Email:"};
    strcat(email, cli.email);
    strcat(dados_cliente, email);

    //vamos converter a idade, que é um valor inteiro ()int, para string
    //assim será possivel concatenar  o texto idade co o valor real da
    //idade do cliente.
    //utilizaremos um novo array de chars que irá quardar o numero , agora no
    //formato de string. E, tambem usaremos o comando soringf(string print format)
    //o inicio do comando pede o array de chars para guardar o resultado
    //da conversão, o segundo item do comando pede o formato original do valor
    //a ser convertido(cli.idade)


     char idade[30]= {"Idade:"};
     char idadecli[20];
     char id = sprintf(idadecli, "%d",cli.idade);
     strcat(idade, idadecli);
     strcat(dados_cliente, idade);


    char *resultado = criar("files/cadastro.txt",dados_cliente);
    printf("%s\n",resultado);
    
    return 0;

}
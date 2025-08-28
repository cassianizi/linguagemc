#include <stdio.h>
#include <stdlib.h>

int main(){
    //Vamos declarar a variavel que ira oepredenta 
    //o arquibo em tempo de execus~so.
    //Esta variavel deve ser declarada como
    //um constate, pois o seu conteudo NUNCA
    //podera ser alterado. uma vez alocado o
    //nome e caminho de arquivo, estes não poderão
    //mudar em tempo de execução para não perder a
    //localização do arquivo e sua posição
    //em memoria.
    
    FILE *arquivo;

    //Vamos definir onde o arquivo esta ou sera
    //criado. Para isso iremos usar o comand
    //fopen( f - file | open = abrir)
    //Além disso iremos definir o atributo de
    //manioulação de arquivos, tais como:
    //r -> read(leitura) | w -> write(escrita)
    //a -> append(adição de texto) | pipe
     arquivo = fopen("files/texto.txt" ,"a");

     //Vamos escrever no arquivo
     fprintf(arquivo, "Sexta-feira\n");

     //fechar o arquivo
     fclose(arquivo);
     printf("o arquivo foi criado\n");

     return 0;
}
#include <stdio.h>
#include <stdlib.h>

char *criararquivo(char *nome_arquivo, char *conteudo){
    FILE *arquivo;
    arquivo = fopen(nome_arquivo,"a");
    fputs(conteudo, arquivo);
    fclose(arquivo);
    return "arquivo criado\n";
}
    float jurossimples(float salario, float taxa){
    return salario * (taxa / 100);
}
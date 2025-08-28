#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/criararquivo1.h"


    struct folhapagamento{
    char nome[100];
    float salario;
    float convenio;
    float premio;
    float salarioliquido;
    };

    int main(){ 
        system("clear"); 


        struct folhapagamento fun;
        printf("Digite o nome do funcionario: \n");
        fgets(fun.nome,sizeof(fun.nome),stdin);

        printf("digite salario bruto:\n");
        scanf("%f",&fun.salario);

        printf("digite desc convenio:\n");
        scanf("%f",&fun.convenio);

        printf("digite premio:\n");
        scanf("%f",&fun.premio);

        printf("O desconto do convenio é %.2f\n",jurossimples(fun.salario,fun.convenio));
        printf("O valor do premio é %.2f\n",jurossimples(fun.salario,fun.premio));
        
        fun.salarioliquido = fun.salario + jurossimples(fun.salario,fun.premio) - jurossimples(fun.salario,fun.convenio);
        printf("O salario liquido é %.2f\n",fun.salarioliquido);
        
        //Vamos criar uma composição com textos literais e variaveis para
        //guardar em um arquivo de texto.
        char dados_funcionario[100];

        char nome[30] = {"nome: "};
        strcat(nome,fun.nome);
        strcat(dados_funcionario,nome);
        
        //Criamos o vetor salario[char] para armazenar o texto salario com R$
        //e juntar(concatenar)[strcat] com valor salario
       
        
         char salario[20] = {"Salario: R$ "};
        
        //Foi criado o vetor c_salario [char] para guardar o valor do salario convertido
        //em char. Somente assim, será concatenado com o texto salario R$
        char c_salario[10];

        //Estamos usando o comando sprintf para converter o valor digitado
        //do salario, que vem no formato float, para o formato char.
        //Assim podemos juntar com o vetor salario, criando, então
        //estrututa: Salario R$ 00000.00
        sprintf(c_salario,"%.2f",fun.salario);

        //Junção (concatenação) entre os vetores salario(salario R$) com
        //c_salario(O valor digitado do salario)
        strcat(salario, c_salario);

        //Depois de juntar os vetores relacionados ao salrio, agora iremos
        //adicionar ao vetor de dados_funcionario para, então, gravar no 
        //arquivo de texto
        strcat(dados_funcionario,salario);

        char salario_liquido[20] = {"\nliquido: R$ "};

        char c_salario_liquido[10];

        sprintf(c_salario_liquido,"%.2f",fun.salarioliquido);

        strcat(salario_liquido, c_salario_liquido);
        
        strcat(dados_funcionario,salario_liquido);
      

        
      
        char *resultado = criararquivo("files/folhapagamento.txt",dados_funcionario);

        printf("%s\n",resultado);
        
        return 0;

       
    }
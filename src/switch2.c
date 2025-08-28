#include <stdio.h>
#include <stdlib.h>

int main(){
    // Chamar o comando system("clear") para limpar a tela do terminal
    system("clear");
    //Criar a variável do tipo char para guardar a operação matematica
    //que poderá ser: + - * ou /
    char ch;
    //Criar variável para guardar dois números para operações 
    //maremáticas
    int a, b;
    printf("Digite uma operação matemática: +, -, *, / \n");
    //Vamos capturar o sinal digitado pelo usuario e alocar na variavel
    //ch. Usaremos o comando getchar, que vem da biblioteca stdlib
    //caso você queira usar o scanf, poderia ser feito da seguinte forma:
    //scanf("%c" ,&ch);
    ch = getchar();
    printf("Digite dois números inteiros separados por vírgulas: \n");
    scanf("%d%d" ,&a,&b);
    switch (ch){
        case '+':{
            int c = a + b;
            printf("O resultado da soma é %d\n" ,c);
        }
        break;
        case '-':{
            int d = a - b;
            printf("O resultado da subtração é %d\n" ,d);
        }
        break;
        case '*': {
            int e = a * b;
            printf("O resultado do produto é %d\n" ,e);
        }
        break;
        case '/':{
            int f = a / b;
            printf("O resultado da divisão é %d\n" ,f);}
        break;
         default : printf("Não é operação.\n");
    }
    system("pause");
    return 0;
    }
#include <stdio.h>
int main() {
    int pontuacao = 85;
    char conceito;
    if (pontuacao >= 90) { // primeira condiçao
        conceito = 'A';
} else if(pontuacao >= 80) { // segunda condiçao, só é avaliada se a primeira for falsa
    conceito = 'B';
} else if (pontuacao >= 70) { // terceira condiçao, só é avalioada se as anteriores forem falsas
    conceito = 'C';
} else if ( pontuacao >= 60) { // quarta condiçao
    conceito = 'D';
} else { // se nenhuma das condiçoes acima for verdadeira
    conceito = 'F';
}
printf("Pontuaçao: %d -> Conceito: %c\n" , pontuacao, conceito);
return 0;
}
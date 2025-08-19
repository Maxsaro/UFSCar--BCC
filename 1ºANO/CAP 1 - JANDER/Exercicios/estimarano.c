/*
    Descrição: Estimar ano de nascimento a partir da idade
    Requer: idade
    Assegura: estimação do ano de nascimento 
*/

#include <stdio.h>

int main(){
    
    //variaveis
    int idade, ano;
    char entrada[1000];

    //ler idade
    printf("Qual sua idade ?");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d" , &idade);

    //cálculo do ano
    ano = 2025 - idade;

    //apresentar resultados
    printf("O ano de nascimento é %d", ano);

    return 0;
}
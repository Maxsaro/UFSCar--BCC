/*
    Descrição: Teste de variáveis de texto
    Requer: Entradas gerais de texto
    Assegura: Resultados dos textos
*/  

#include <stdio.h>

int main(){

    //Variáveis
    char c1[1000];

    //Entrada
    printf("Digite uma frase: ");
    fgets(c1, sizeof c1, stdin);

    //Função
    printf("c1 = %s", c1);

    return 0;
}
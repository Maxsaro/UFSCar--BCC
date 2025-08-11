/*
    Descrição: Algoritmo para ler uma sequência de nomes e indicar quantas vezes o priemeiro nome da sequência apareceu;
    Requer: Lista contendo pelo menos um nome;
    Assegura: Quantidade de aparições do primeiro nome de uma sequência de nomes;
*/  

#include <stdio.h>
#include <string.h>

int main(){

    //Variáveis
    char primeiro[30], nomes[30];
    int contador = 0;

    //Leitura do primeiro nome
    fgets(nomes, sizeof nomes - 1, stdin);
    nomes[strlen(nomes) -1] = '\0';
    contador++;

    //Salva o primeiro nome
    strncpy(primeiro, nomes, sizeof nomes);

    //Condicional de repetição
    while(strcmp(nomes,"FIM") != 0){

        //Pega próximo nome
        fgets(nomes, sizeof nomes - 1, stdin);
        nomes[strlen(nomes) -1] = '\0';

        //Verifica se é igual o primeiro para contar
        if(strcmp(nomes,primeiro) == 0){
            contador++;
        }
    }

    //Resultados
    printf("%d", contador);

    return 0;
}
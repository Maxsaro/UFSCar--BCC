/*
    Descrição: Programa que pega vetor e troca valores pares para zero
    Requer: Vetor com valores aleatórios
    Assegura: Prática
*/

#include <stdio.h>
#include <stdlib.h>

void substituipar(int vetor[],int tamanho);
void printavetor(int vetor[], int);

int main(){

    //Variáveis 
    int TAMANHO = 10, vetor[TAMANHO];

    //Gerar números aleatórios
    for(int i = 0; i < TAMANHO; i++)
        vetor[i] = rand() %10000;

    //printar vetor
    printavetor(vetor, TAMANHO);

    //Substitui números pares por 0
    substituipar(vetor, TAMANHO);

    //printa novamente
    printavetor(vetor, TAMANHO);

    return 0;
}

void substituipar(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] % 2 == 0)
            vetor[i] = 0;
    }
}

void printavetor(int vetor[], int tamanho){
    printf("Vetor [");
    for(int i = 0; i < tamanho; i++)
        printf(" %d   ", vetor[i]);
    printf("]\n");
}
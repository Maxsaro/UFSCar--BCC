/*
    Descrição: Apresentação de vetores
    Requer: Conjunto de variáveis
    Assegura: Resultado
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define TAMANHO 10

int main(){

    int vetor[TAMANHO] = {[0 ... TAMANHO - 1] = -69};
    int soma = 0, max = 0, posicao;
    char *repete = "Não repete" ;

    for(int i = 0; i < TAMANHO ; i++)
        vetor[i] = TAMANHO - i;
    for(int i = 0; i < TAMANHO ; i++)
        printf("Vetor %d = %d\n", i, vetor[i]);
    for(int i = 1; i < TAMANHO; i+=2)   
        soma += vetor[i];
    printf("Soma dos ímpares é %d\n", soma);
    for (int i = 0; i < TAMANHO; i++){
        vetor[i] = rand() % 5000;
        printf("Vetor %d = %d\n", i, vetor[i]);
        if(vetor[i] > max){
            max = vetor[i];
            posicao = i;
        }
    }
    
    vetor[posicao] = vetor[TAMANHO - 1];
    vetor[TAMANHO - 1] = max;

    printf("\nvetor max = %d, posição = %d\n\n", max, posicao);
    
    for(int i = 0; i < TAMANHO ; i++)
        printf("Vetor %d = %d\n", i, vetor[i]);

    int i = 1;
    while(i < TAMANHO && strcmp(repete, "Repete")){
        if(vetor[0] == vetor[i])
            repete = "Repete";
        i++;
    }
    printf("%s",repete);

    return 0;
}

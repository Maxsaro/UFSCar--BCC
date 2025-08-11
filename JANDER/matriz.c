/**
 * arquivo: matriz.c
 * Jander, 2025 - CAP
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_LINHAS 50
#define MAX_COLUNAS 50

struct matriz {
    int linhas;
    int colunas;
    double dados[MAX_LINHAS][MAX_COLUNAS];
};
/**
 * Retorna uma matriz com as dimensões desejadas
 * @param linhas número de linhas
 * @param colunas número de colunas
 * @return matriz com as dimensões desejadas
 */
struct matriz nova_matriz(int linhas, int colunas);

void escreva_matriz(struct matriz matriz);

double soma(struct matriz matriz);

struct matriz aleatoria(int linhas, int colunas);

double media(struct matriz matriz);

/*
 * Main
 */
int main(void) {

    struct matriz m1 = aleatoria(50, 50);

    escreva_matriz(m1);
    printf("%lf", media(m1));
    
    return 0;
}

/*
 * Implementações
 */

struct matriz nova_matriz(int linhas, int colunas) {
    struct matriz matriz;
    matriz.linhas = linhas;
    matriz.colunas = colunas;
    for (int i = 0; i < linhas; i++ )
        for(int j = 0; j < colunas; j++)
            matriz.dados[i][j] = 0;

    return matriz;
}

struct matriz aleatoria(int linhas, int colunas) {
    struct matriz matriz;
    matriz.linhas = linhas;
    matriz.colunas = colunas;
    for (int i = 0; i < linhas; i++ )
        for(int j = 0; j < colunas; j++)
            matriz.dados[i][j] = (rand() % 1000) * 0.1;

    return matriz;
}

void escreva_matriz(struct matriz matriz) {
    for(int i = 0; i < matriz.linhas; i++) {
        for (int j = 0; j < matriz.colunas; j++)
            printf("%5.1f ", matriz.dados[i][j]);
        printf("\n");
    }
}

double soma(struct matriz matriz){
    double soma = 0;
    for(int i = 0; i < matriz.linhas; i++){
        for(int j = 0; j < matriz.colunas; j++ )
            soma += matriz.dados[i][j];
    }
    return soma;
}

double media(struct matriz matriz){
    return (soma(matriz)/(matriz.colunas*matriz.linhas));
}


/*
    Descrição: Matriz exercícios
    Requer: Matriz e multiplicador  
    Assegura: matriz multiplicada
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LINHAS 50
#define MAX_COLUNAS 50

struct matriz{
    int linhas;
    int colunas;
    double dados[MAX_LINHAS][MAX_COLUNAS];
};

void escreva_matriz(struct matriz matriz);

struct matriz aleatoria(int linhas, int colunas);

struct matriz fazermatriz(void);

struct matriz multiplica(struct matriz matriz, double escalar);

struct matriz soma_matriz(struct matriz matriz1, struct matriz matriz2);

struct matriz subtrai_matriz(struct matriz matriz1, struct matriz matriz2);

struct matriz nova_matriz(int linhas, int colunas);

int main(){

    struct matriz teste1 = aleatoria(2,2);
    escreva_matriz(teste1);
    struct matriz teste2 = aleatoria(2,2);
    escreva_matriz(teste2);
    escreva_matriz(subtrai_matriz(teste1, teste2));

    return 0;
}

void escreva_matriz(struct matriz matriz) {
    for(int i = 0; i < matriz.linhas; i++) {
        for (int j = 0; j < matriz.colunas; j++)
            printf("%5.1f ", matriz.dados[i][j]);
        printf("\n");
    }
}

struct matriz nova_matriz(int linhas, int colunas) {
    struct matriz matriz;
    matriz.linhas = linhas;
    matriz.colunas = colunas;
    for (int i = 0; i < linhas; i++ )
        for(int j = 0; j < colunas; j++)
            matriz.dados[i][j] = 0;

    return matriz;
}

struct matriz fazermatriz(void){
    struct matriz matriz; 
    int linhas, colunas;
    printf("Quantas colunas e linhas para matriz ? ");
    scanf("%d %d", &linhas, &colunas);
    matriz.linhas = linhas;
    matriz.colunas = colunas;
    for(int i = 0; i < matriz.linhas; i++){
        for(int j = 0; j < matriz.colunas; j++){
            printf("Qual o valor da %dº linhas e %dº coluna ", i+1, j+1);
            scanf("%lf", &matriz.dados[i][j]);
        }
    }
    return matriz;
}

struct matriz multiplica(struct matriz matriz, double escalar){
        for(int i = 0; i < matriz.linhas; i++){
            for(int j = 0; j < matriz.colunas; j ++)
                matriz.dados[i][j] *= escalar;
    }
    return matriz;
}

struct matriz soma_matriz(struct matriz matriz1, struct matriz matriz2){
    if(matriz1.linhas == matriz2.linhas && matriz1.colunas == matriz2.colunas){
        struct matriz soma = matriz1;
        for(int i = 0; i < matriz1.linhas; i++){
            for(int j = 0; j < matriz1.colunas; j++)
                soma.dados[i][j] = matriz1.dados[i][j] + matriz2.dados[i][j];
            
    }
        return soma;
    }
    else
        return nova_matriz(0,0);
}

struct matriz subtrai_matriz(struct matriz matriz1, struct matriz matriz2){
    return soma_matriz(matriz1, multiplica(matriz2, -1));
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

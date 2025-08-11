/* 
    Descrição: Escrever função 2x, e zerar x    
    Requer: valor de x
    Assegura: zerar x e função
*/

#include <stdio.h>

void tornarpar(int *);
void media(double *, double *);
void trocar(int *, int *);
void ordenar(int *, int *);

int main(){
    
    //variaveis
    char entrada[100];
    int valor, troca1, troca2, ordenar1, ordenar2; 
    double media1, media2;

    //Pegar valor
    printf("Qual o valor para tornar par ?\n");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &valor);

    //Função modulo
    tornarpar(&valor);

    //Resultados
    printf("Par = %d\n", valor);

     //Pegar valor
     printf("Qual os valores para fazer a média ?\n");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf", &media1);
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf", &media2);

    //Função modulo
    media(&media1, &media2);

    //Resultados
    printf("Media = %.2lf = %.2lf\n", media1, media2);

    //Pegar valor
     printf("Qual os valores para fazer a troca ?\n");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &troca1);
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &troca2);

    //Função modulo
    trocar(&troca1, &troca2);

    //Resultados
    printf("Valor 1 = %d\nValor 2 = %d\n", troca1, troca2);

    //Pegar valor
     printf("Qual os valores para ordenar ?\n");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &ordenar1);
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &ordenar2);

    //Função modulo
    ordenar(&ordenar1, &ordenar2);

    //Resultados
    printf("Primeiro número = %d\nSegundo número = %d\n", ordenar1, ordenar2);
} 

void tornarpar(int *x){
    if ((*x) % 2 != 0)
        (*x)++;           
}

void media(double *x, double *y){
    *x = *y = (*x + *y)/2; 
}

void trocar(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void ordenar(int *x, int *y){
    if(*x > *y)
        trocar(x, y);
}
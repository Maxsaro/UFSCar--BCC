/*
    Descrição: Transformar de nota para conceito
    Requer: Nota
    Assegura: Conceito
*/

#include <stdio.h>

int main(){

    //Variáveis
    int n;
    char entrada[1000], conceito;
    double nota, soma = 0;

    //Pegar nota
    printf("Qual a quantidade de conceitos ?");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d" , &n );

    for(int i = 0; i < n; i++){
        printf("Qual o conceito ?\n");
        fgets(entrada, sizeof entrada, stdin);
        sscanf(entrada, "%c", &conceito);
    

    //Casos da nota
        if (conceito == 'A'){
            nota = 10;
        }else if (conceito == 'B'){
            nota = 8;
        }else if (conceito == 'C'){
            nota = 6;
        }else if (conceito == 'D'){
            nota = 3;
        }else{
            nota= 0;
        }

        soma += nota;
    }    

    //Apresente resultado
    printf("%g",soma/n);

    return 0;
}
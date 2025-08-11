/*
    Descrição: Cálculo da média
    Requer: dois reais
    Assegura: apresentação da média
*/

#include<stdio.h>

int main(){
    //variaveis
    double nota1, nota2, media;
    char entrada[1000];

    //ler notas
    printf("Qual a 1º nota ?");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada,"%lf",&nota1);

    printf("Qual a 2º nota ?");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada,"%lf",&nota2);

    //calcular media 
    media = (nota1 + nota2)/2;

    //apresentar resultados
    printf("média = %g\n", media);

    return 0;
}

/*
    Descrição: Calcular a área de um circulo a partir de um raio
    Requer: Raio do circulo
    Assegura: Área do circulo
*/

#include <stdio.h>
#include <math.h>

int main(){
    
    //variaveis
    double raio, area, pi = M_PI;
    char entrada[1000];

    //ler raio
    printf("Qual o valor do raio ?\n");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf" , &raio);

     //calcular área 
     area = pi*raio*raio;

     //apresentar resultados
     printf("Área do circulo = %.2lf", area);

     return 0;
}
/*



*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//Funções
double distancia(double, double);

int main(){

    //Variáveis
    char entrada[100];
    double x, y;

    //Pegar x
    printf("Qual é o x ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf", &x);

    //Pegar y
    printf("Qual é o y ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf", &y);

    //Resultados
    printf("A distância é %.2lf", distancia(x,y));
        
}

//Função para pegar a distância do ponto a origem
double distancia(double x, double y){    
    return sqrt(x * x + y * y);
}
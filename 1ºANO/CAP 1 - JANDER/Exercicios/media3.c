/*
    Descrição: Função que dado 3 valores reais retorna a média
    Requer: 3 valores reais
    Assegura: Media dos valores
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool divide(int);
double media3(double, double, double), dist(double, double, double, double, double, double);
int ultimodig(int), dezdig(int), contdig(int);

int main(){

    //Variáveis
    char entrada[30];
    double mediav1, mediav2, mediav3, x1, y1, z1, x2, y2, z2;
    int divisivel, ultimodigito, dezdigito, contdigito;

   //Pegar valores
    printf("Qual é os 3 valores ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf %lf %lf", &mediav1, &mediav2, &mediav3);

    //Resultados
    printf("A média é %.2lf\n", media3(mediav1, mediav2, mediav3));

    //Pegar valor
    printf("Qual o valor ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &divisivel);

    //Resultados
    if(divide(divisivel))
        printf("O valor é divisível por 3 e 5\n");
    else
        printf("O valor não é divisível por 3 e 5\n");

    //Pegar valor
    printf("Qual o valor ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &ultimodigito);

    //Resultados
    printf("O ultimo digito do valor é %d\n", ultimodig(ultimodigito));

    //Pegar valor
    printf("Qual o valor ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &dezdigito);

    //Resultados
    printf("O digito da dezena do valor é %d\n", dezdig(dezdigito));

    //Pegar valor
    printf("Qual o valor ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &contdigito);

    //Resultados
    printf("O nº de digito do valor é %d\n", contdig(contdigito));

    //Pegar valores
    printf("Qual é a coordenada do primeiro ponto ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf %lf %lf", &x1, &y1, &z1);

    printf("Qual é a coordenada do segundo ponto ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf %lf %lf", &x2, &y2, &z2);

    //Resultado
    printf("A distância é %.2lf\n", dist(x1, y1, z1, x2, y2, z2));
}

double media3(double x, double y, double z){
    return (x + y + z)/3;
}

bool divide(int x){
    return x % 3 == 0 && x % 5 == 0;
}

int ultimodig(int x){
    return x % 10;
}

int dezdig(int x){
    return (x/10) % 10;
}

int contdig(int x){
    int contador = 0;
    while(x > 1){
        contador++;
        x = x/10;
    }
    return contador;
}

double dist(double x1, double y1, double z1, double x2, double y2, double z2){
    return sqrt(pow(x1 -x2,2) + pow(y1 - y2,2) + pow(z1 - z2,2));
}
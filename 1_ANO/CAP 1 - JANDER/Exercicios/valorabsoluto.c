/*



*/

#include <stdio.h>
#include <math.h>

//Funções
double valorabsoluto(double);

int main(){

    //Variáveis
    char entrada[100];
    double valor;

    //Pegar valor
    printf("Qual é o valor ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf", &valor);

    //Resultados
    printf("O valor absouluto de %.2lf é %.2lf", valor, valorabsoluto(valor));
 
    return 0;
}

//Função para fazer valor absoluto
double valorabsoluto(double x){
    if( x < 0)
        x = -x;
    return x;
}
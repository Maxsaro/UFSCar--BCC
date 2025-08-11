/*
    Descrição: Verifica se x é par
    Requer: Valor
    Assegura: Se é par ou não
*/

#include <stdio.h>
#include <stdbool.h>

bool eh_par(int x){
    return x % 2 == 0;
}

int main(){

    //Variáveis
    char entrada[1000];
    int valor;

    //Pegar valor
    printf("Qual o valor número ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &valor);

    if(eh_par(valor))
        printf("É par");
    else
        printf("N é par");

    return 0;
}


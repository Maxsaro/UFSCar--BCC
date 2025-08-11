/*
    Descrição: Comverção de uma sequência de valores de mmHg para atm, com valor sentinela 0
    Requer: Sequência de valores em mmhg
    Assegura: Sequência de valores em atm
*/

#include <stdio.h>

int main(){

    //declarar variáveis
    char entrada[1000];
    double mmhg, atm;

    //Obter pressão
    printf("Qual a pressão em mmHg ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf", &mmhg);

    //Condição do enquanto
    while (mmhg != 0){

        //Calcular em atm
        atm = mmhg / 760;

        //Apresentar resultado
        printf("O valor em atm é %.3lf\n", atm);

        //Pegar prox valor
        printf("Qual a pressão em mmHg ?");
        fgets(entrada, sizeof entrada, stdin);
        sscanf(entrada, "%lf", &mmhg);
    }

    return 0;
}
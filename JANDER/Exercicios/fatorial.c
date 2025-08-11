/*
    Descrição: Somatorio de um numero apenas os pares
    Requer: O numero a fazer o somatorio
    Assegura: Somatorio dos números pares
*/

#include <stdio.h>

int main(){

    //Variaveis
    char entrada[1000];
    int i, j , número;
    double fatorial, somatorio = 0;

    //Colete o numero
    printf("Qual o valor ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &número);
    
    //Estrutura do somatorio
    for( i = 1; i <= número; i ++){

        //Resete do fatorial
        fatorial = 1;

        //Execução do fatorial
        for( j = 1; j <= i; j++ ){
            fatorial *= j;
        }

        //Soma do fatorial
        somatorio += fatorial;
    }

    //Resultado
    printf("A soma do fatorial é %.0lf", somatorio);

}
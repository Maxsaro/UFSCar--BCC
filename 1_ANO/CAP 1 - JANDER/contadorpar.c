/*
    Descrição: Conta números pares na sequência e a soma deles
    Requer: Sequencia de numeros inteiros positivos
    Assegura: Quantidade de números pares e soma dos numeros pares
*/

#include <stdio.h>

int main(){

    //Declarar variáveis necessárias
    char entrada[1000];
    int valor, contador = 0, soma = 0;

    //Obter valor
    printf("Qual o valor do número ?");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &valor);

    //Repetição do comando composto para todo valor diferente de 0
    while(valor != 0){

        //Verificar se o valor é par
        if ( valor % 2 == 0){
            contador++;
            soma += valor;
        }

        //Obter prox valor
        printf("Qual o valor do número ?");
        fgets(entrada, sizeof entrada, stdin);
        sscanf(entrada, "%d", &valor);
    }

    //Apresentar resultados
    printf("A quantidade de números pares na sequência é %d e a soma é %d", contador, soma );

    return 0;
}
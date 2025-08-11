/*



*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//Funções
bool eperfeito(int);

int main(){

    //Variáveis
    char entrada[100];
    int valor;

    //Pegar valor
    printf("Qual é o valor ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &valor);

    //Resultados
    if (eperfeito(valor))
        printf("O valor é perfeito");
    else
        printf("O valor não é perfeito");
    return 0;
}

//Função para fazer valor absoluto
bool eperfeito(int x){
    int soma = 0; 
    for(int i = 1; i <= x/2; i++){
        if(x % i == 0)
            soma += i;
    }    
    return soma == x;
}
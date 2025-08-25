/*
    Descrição: Média do palpite das idades até valor sentinela 0
    Requer: Palpites da idade
    Assegura: Média dos palpites
*/

#include <stdio.h>

int main(){

    //Variaveis
    char entrada[1000];
    int idade, contador = 0, somador = 0;
    double media;

    //Obter palpite
    printf("Qual voçê acha que é a idade do professor ? ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &idade);

    //Definir valor sentinela
    while (idade != 0){

        //processar idade
        somador += idade;
        contador++;
        
        //Obter novo palpite
        printf("Qual voçê acha que é a idade do professor ?");
        fgets(entrada, sizeof entrada, stdin);
        sscanf(entrada, "%d", &idade);
        
    }

    //Calcular media
    media = (double) somador / contador;

    //resultados
    printf("A média das idade é %.3lf", media);

    return 0;
}

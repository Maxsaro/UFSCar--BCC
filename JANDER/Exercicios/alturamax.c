/* 
    Descrição: Determinar a altura máxima em uma equipe de 20 competidores
    Requer: Uma sequência de 20 medidas de altura
    Assegura: A altura máxima
*/

#include <stdio.h>

int main(){

    //Variáveis
    char entrada[1000];
    double altura, max;

    //Perguntar primeira altura
    printf("Qual a altura ?");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf", &altura);
    max = altura;

    //Iniciar repetição dos 20
    for(int i = 2; i <= 20; i++){

        //Perguntar a altura 19 vezes
        printf("Qual a altura ?");
        fgets(entrada, sizeof entrada, stdin);
        sscanf(entrada, "%lf", &altura);

        //Verificar maior altura
        if(altura > max){
            max = altura;
        }
    }

     //Resultados
     printf("A maior altura é %.2lf", max);

    return 0;
}
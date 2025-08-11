/*
    Descrição: Leitura de Variáveis
    Requer: Variáveis
    Assegura: Leitura das Variavies 
*/

#include <stdio.h>
#include <string.h>

int main(){

    //variaveis
    char texto[1000];
    char entrada[160];
    int valor_inteiro;
    double valor_real;

    //int
    printf("Digite um valor inteiro: ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d", &valor_inteiro);
    printf("O valor inteiro digitado foi %d\n",valor_inteiro);

    //real
    printf("Digite um valor Real: ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf", &valor_real);
    printf("O valor real digitado foi %.2lf\n",valor_real);

    //int e real
    printf("Digite um valor Inteiro e um valor Real: ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%d%lf", &valor_inteiro, &valor_real);
    printf("O valor inteiro digitado foi %d e o valor real foi %.2lf\n", valor_inteiro, valor_real);

    //texto
    printf("Digite um texto: ");
    fgets(texto, sizeof texto, stdin);
    texto[strlen(texto) - 1] = '\0';
    printf("O texto digitado foi \"%s\"\n", texto);

    return 0;
}
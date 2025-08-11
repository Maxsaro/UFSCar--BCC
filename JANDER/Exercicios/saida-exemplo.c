/*
    Descrição: Abertura/leitura de arquivos pelo código
    Requer: Arquivo
    Assegura: Arquivo no terminal
*/

#include <stdio.h>
#include <string.h>

int main(){

    //Variáveis
    char input[200], nome[160];
    double valor, soma = 0;

    //Qual o arquivo ?
    printf("Qual o arquivo ? ");
    fgets(nome, sizeof nome, stdin);
    nome[strlen(nome) -1] = '\0';

    //Acessar o arquivo
    FILE *arquivo = fopen(nome, "r");

    //Verifica se conseguiu
    if(arquivo == NULL){

        //Mensagem de erro
        perror("Erro no acesso do arquivo");
        return 1;

    }

    //Acesso ao texto do arquivo
    while(fgets(input, sizeof input, arquivo) != NULL){

        //Pegar parte real do input
        sscanf(input, "%lf", &valor);
        soma += valor;

    }

    //Fechar o arquivo
    fclose(arquivo);

    //Resultados
    printf("%lf", soma);

    return 0;
}
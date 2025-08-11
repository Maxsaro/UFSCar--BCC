/*
    Descrição: Pegar conceitos na linha e transforma na média das notas
    Requer: Arquivos com os conceitos
    Assegura: Nota média
*/  

#include <stdio.h>
#include <string.h>

int main(){

    //Variáveis
    int n = 0, contador = 0;
    char entrada[100], nome[30], conceito;
    double nota, soma = 0, somatotal = 0, media;

    //Criar arquivo
    printf("Qual o nome do arquivo ? ");
    fgets(nome, sizeof nome, stdin);
    nome[strlen(nome) - 1] = '\0';
    FILE *arquivo = fopen(nome, "r");

    //Verificar se arquivo abriubn
    if(arquivo == NULL){
        perror("Erro no acesso do arquivo");
        return 1;
    }

    //Acesso ao arquivo de texto
    while(fgets(entrada, sizeof entrada, arquivo) != NULL){

        //Contar quantos caracteres na linha
        while(entrada[n] != '\n' && entrada[n] != '\0'){
            n++;
        }

        //Pegar caractere do arquivo
        for(int i = 0; i <= n; i++){
            conceito = entrada[i];   
            
            //Casos da nota
            if (conceito == 'A'){
                nota = 10;
            }else if (conceito == 'B'){
                nota = 8;
            }else if (conceito == 'C'){
                nota = 6;
            }else if (conceito == 'D'){
                nota = 3;
            }else{
                nota= 0;
            }
        
            //Somar notas
            soma += nota;
        }

        //Somar media da linha
        media = soma/n;
        somatotal += media;
        contador++;
        n = 0;
        soma = 0;
    }

    //Fechar arquivo
    fclose(arquivo);

    //Resultados
    printf("A média é %.2lf", somatotal/contador);
    
    return 0;    
}
    

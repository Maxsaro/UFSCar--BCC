/*
    Descrição:
    Requer:
    Assegura:
*/

#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

int comprimento(char *str){
    int contador = 0;
    while (str[contador] != '\0')
    {
        contador++;
    }
    return contador;
}

bool eh_vogal(char c){
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        return true;
    else
        return false;
}

bool eh_maiuscula(char c){
    if('A' <= c && 'Z' >= c)
        return true;
    else    
        return false;
}

int qntdvogal(char *str){
    int contadorvogal = 0, i = 0;
    while(str[i] != '\0'){
        if(eh_vogal(str[i]))
            contadorvogal++;
        i++;
    }
    return contadorvogal;
}

int main(){
    char s[100];

    fgets(s, sizeof s, stdin);
    s[comprimento(s) - 1] = '\0';

    printf("%d %d", comprimento(s), qntdvogal(s));

    return 0;
}
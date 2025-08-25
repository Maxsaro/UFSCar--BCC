/*
    Descrição: Apresentação de struct
    Requer: Conjunto de variáveis
    Assegura: Resultado
*/

#include <stdio.h>

 //Declaração da struct
    struct data{
        int dia, mês, ano;
};

int main(){

    //Variáveis da struct
    struct data hoje;
    printf("Qual a data ? ");
    scanf("%2d%*c%2d%*c%4d", &hoje.dia, &hoje.mês, &hoje.ano);

    //Resultados
    printf("%02d/%02d/%04d", hoje.dia, hoje.mês, hoje.ano	);

    return 0;
}

/*
    Descrição: Apresentação de struct
    Requer: Conjunto de variáveis
    Assegura: Resultado
*/

#include <stdio.h>

int main(){

    //Declaração da struct
    struct ponto_r3{
        double x, y, z;
    };

    //Declaração das variáveis do struct
    struct ponto_r3 ponto;
    ponto.x = 1.2;
    ponto.y = -0.5;
    ponto.z = 1.7;

    printf("Ponto = ( %g , %g , %g )\n", ponto.x, ponto.y, ponto.z);

    struct ponto_r3 outro_ponto;
    outro_ponto = ponto;

    printf("Outro ponto = ( %g , %g , %g )\n", outro_ponto.x, outro_ponto.y, outro_ponto.z);

    return 0;
}

/*
    Descrição: Determinação, a partir de a, b, c, das raizes da equação de segundo grau 
    Requer: Os coeficientes da equação
    Assegura: Apresentação das raízes reais, se não tiver uma nada
*/

#include <stdio.h>
#include <math.h>

int main(){

    //Variáveis
    char entrada[1000];
    double a, b, c, x0, x1, delta;

    //Pegar valor dos coeficientes
    printf("Qual o valor de a, b e c respectivamente ");
    fgets(entrada, sizeof entrada, stdin);
    sscanf(entrada, "%lf %lf %lf", &a, &b, &c);

    //Se a nulo
    if (a == 0){

        //Calcular raiz (bx + c = 0)
        x0 = -c / b;

        //Resultados
        printf("A raiz é %.2lf",x0);

    }else{

        //Calcular delta
        delta = b*b - 4*a*c;

        //Se delta nulo
        if (delta == 0){

            //Calcular raiz
            x0 = -b / (2*a);

            //Resultasdo
            printf("A raiz é %.2lf", x0);

        }else if(delta > 0){
            
            //Calculo das 2 raízes
            x0 = (-b - sqrt(delta)) / (2*a);
            x1 = (-b + sqrt(delta)) / (2*a);

            //Resultados
            printf("As raizes são %.2lf e %.2lf", x0, x1);
        }
    } 

    return 0;
}
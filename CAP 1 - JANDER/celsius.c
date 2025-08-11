/*           
    Descrição: Conversão de graus Celsius para Fahrenheit
    Requer: Temperatura em Celsius
    Assegura: Apresentação da temperatura equivalente em Fahrenheit
*/

#include <stdio.h>

int main(){ 
    
    //Declarar Variável
    double Celsius, Fahrenheit;

    //Obtenha Celsius
    printf("Qual a temperatura em graus Celsius ?");
    scanf("%lf", &Celsius);

    //Transforme para Fahrenheit
    Fahrenheit = Celsius * 9 / 5 + 32;

    //Apresente o resultado
    printf("%lfº Celsius é igual a %gº Fahrenheit", Celsius, Fahrenheit);

    return 0;
} 
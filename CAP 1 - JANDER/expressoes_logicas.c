// Descrição: Exemplos de expressões gerais
// Jander Moreira - 2025
//
#include <stdio.h>
#include <stdbool.h>

int main(void) {

//    double d1 = 5;
//    double d2 = 3;

//    printf("soma %g; subtração %g\n", d1 + d2, d1 - d2);
//    printf("multiplicação %g; divisão %g\n", d1 * d2, d1 / d2);


    int i1 = -10;
    int i2 = 6;

    printf("soma %d; subtração %d\n", i1 + i2, i1 - i2);
    printf("multiplicação %d; divisão %d\n", i1 * i2, i1 / i2);

    bool eh_maior = false || true;

    printf("%d\n", i1 > i2);
    printf("%d\n", i1 < i2);
    printf("%d\n", i1 >= i2);
    printf("%d\n", i1 <= i2);
    printf("%d\n", i1 == i2);
    printf("%d\n", i1 != i2);


    return 0;
}
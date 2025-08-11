// Descrição:
// Jander Moreira - 2025
//
#include <stdio.h>

int main(void){
    int valor_int = 10;
    double valor_real = 1.1;
    char texto[] = "Um texto qualquer";

    printf("Valor inteiro: %d\n", valor_int);
    printf("Valor real: %g\n", valor_real);
    printf("Valor textual: %s\n", texto);

    printf("Tamanho do int: %ld\n", sizeof (int));
    printf("Tamanho do double: %ld\n", sizeof (int));

    return 0;
}
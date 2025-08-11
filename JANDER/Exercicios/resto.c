#include <stdio.h>

int main(){
    int a,b,resto = 1;
    scanf("%d %d", &a, &b);
    while(b != 0){
        printf("\n%d - %d\n", a, b);
        resto = a % b;
        a = b;
        b = resto;
        printf("R: %d\n", resto);
    }
}
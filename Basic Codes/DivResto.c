#include <stdio.h>

int main () {

    int dividendo;
    int divisor;
    int resultado;
    int resto;

    scanf("%d", &dividendo);
    scanf("%d", &divisor);

    resultado = dividendo/divisor;
    resto = dividendo%divisor;

    printf("%d %d\n", resultado, resto);

    return 0;

}
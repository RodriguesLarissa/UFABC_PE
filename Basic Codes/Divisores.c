#include <stdio.h>

int main (){

    int numero;
    int contador=0;

    scanf("%d", &numero);

    for(int i=numero; i > 0; i--){
        if(numero%i == 0 && i%2 == 0){
            contador++;
        }
    }

    printf("%d\n", contador);
}
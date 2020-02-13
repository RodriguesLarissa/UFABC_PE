/* Faça um programa que lê um inteiro n seguido de inteiros a1, ... , an (0 <= ai <= 100 para
todo i.
O seu programa deve dizer quantos valores distintos temos em a1, ... , an. */

#include <stdio.h>

int main (){
    int n, i, contador=0;

    scanf("%d", &n);

    int vetor[n];
    int resultado[101];

    for(i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<101; i++){
        resultado[i] = 0;
    }

    for(i=0; i<n; i++){
        resultado[vetor[i]]++;
    }

    for(i=0; i<101; i++){
        if(resultado[i] != 0){
            contador++;
        }
        if(contador == n){
            break;
        }
    }

    printf("%d\n", contador);

    return 0;
}
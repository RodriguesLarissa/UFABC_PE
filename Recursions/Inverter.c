#include <stdio.h>

// Este procedimento recebe um vetor, um indice i, e o tamanho n.
// Ele deve imprimir o vetor em ordem inversa, usando recursao.
void imprime (int vetor[1000], int i, int n){
    if(i < n){
        imprime(vetor, i+1, n);
        if(i != 0){
            printf("%d ", vetor[i]);
        }
        else{
            printf("%d\n", vetor[i]);
        }
    }
}

int main () {
 int n, i, vetor[1000];
 scanf ("%d", &n);
 for (i = 0; i < n; i++) {
 scanf ("%d", &vetor[i]);
 }
 imprime (vetor, 0, n);
 return 0;
}
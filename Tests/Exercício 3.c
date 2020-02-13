/* Faça um programa que
● Lê um inteiro n <= 100 e uma matriz A (n por n) de inteiros. Em seguida, leia
inteiros a1, ..., an. É garantido que 1 <= a1 <= n e que cada valor de 1 a n aparece
exatamente uma vez em a1, ... , an.
● Cria uma matriz $H$, onde
○ a linha 1 de H é a linha a1 de A.
○ a linha 2 de H é a linha a2 de A.
○ e assim por diante até a linha n..
● Imprime a matriz H como abaixo (não imprima um espaço em branco após o último
número de cada linha).
Observações:
● O seu programa deve construir a matriz H, não basta apenas imprimi-la.
● Você pode guardar A e H em matrizes 100 por 100 (não tem problema que um
pouco do espaço seja desperdiçado). */

#include <stdio.h>

int main(){
    int n, i, j, k;

    scanf("%d", &n);

    int mat[n][n];
    int mat2[n][n];
    int vet[n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    for(i=0; i<n; i++){
        k = vet[i]-1;
        for(j=0; j<n; j++){
            mat2[i][j] = mat[k][j];
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(j<n-1){
                printf("%d ", mat2[i][j]);
            }
            else{
                printf("%d\n", mat2[i][j]);
            }
        }
    }

}
/* Faça um programa que
● Lê um número inteiro n <= 100 e uma matriz A(n por n) de inteiros.
● Constrói a matriz, H = (-A J I A)
onde I é a matriz identidade nxn e J é a matriz em que todas as entradas são 1.
● Imprime a matriz H como abaixo (não imprima um espaço em branco após o último
número de cada linha).
Observações:
● O seu programa deve construir a matriz H, não basta apenas imprimi-la.
● Você pode guardar A em uma matriz 100 por 100 e H em uma matriz 200 por 200
(não tem problema que um pouco do espaço seja desperdiçado). */

#include <stdio.h>

void constroiMatriz(int matA[100][100], int n){
    int i, j, k=0, q=0;
    int matH[200][200];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            matH[i][j] = -matA[i][j];
        }
    }

    for(i=0; i<n; i++){
        for(j=n; j<n*2; j++){
            matH[i][j] = 1;
        }
    }

    for(i=n; i<n*2; i++){
        for(j=0; j<n; j++){
            if(i-j == n){
                matH[i][j] = 1;
            }
            else{
                matH[i][j] = 0;
            }
        }
    }

    for(i=n; i<n*2; i++){
        q = 0;
        for(j=n; j<n*2; j++){
            matH[i][j] = matA[k][q];
            q++;
        }
        k++;
    }

    for(i=0; i<n*2; i++){
        for(j=0; j<n*2; j++){
            if(j != (n*2)-1){
                printf("%d ", matH[i][j]);
            }
            else{
                printf("%d\n", matH[i][j]);
            }
        }
    }
}

int main (){

    int n, i, j;

    scanf("%d", &n);

    int matA[100][100];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matA[i][j]);
        }
    }

    constroiMatriz(matA, n);
}
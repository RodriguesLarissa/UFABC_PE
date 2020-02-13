/* Faça um programa que um número inteiro n e inteiros a1, ... , an. E calcula
recursivamente a seguinte função para i de 0 a n:
F(n) = {0, se n=0; max(0, a1), se n=1; ai + max(F(n-1), F(n-2)). se n > 1;} */

#include<stdio.h>

int funcao(int *vetor, int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        if(vetor[n-1] > 0){
            return vetor[n-1];
        }
        else{
            return 0;
        }
    }
    else{
        if(funcao(vetor, n-1) > funcao(vetor, n-2)){
            return vetor[n-1] + funcao(vetor, n-1);
        }
        else{
            return vetor[n-1] + funcao(vetor, n-2);
        }
    }
}

int main (){
    int n,i;

    scanf("%d", &n);

    int vetor[n];

    for(i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<=n; i++){
        printf("F(%d) = %d\n", i, funcao(vetor, i));
    }

    return 0;
}
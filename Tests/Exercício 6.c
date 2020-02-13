#include <stdio.h>

double recursao (int n, int max, double *vetor){
    if(n==max){
        return vetor[n];
    }
    else{
        return (1/recursao((n+1), max, vetor)) + vetor[n];
    }

}

int main (){
    int n, i;

    scanf("%d", &n);

    double vetor[n];

    for(i=0; i<=n; i++){
        scanf("%lf", &vetor[i]);
    }

    printf("%.2lf\n", recursao(0, n, vetor));
}
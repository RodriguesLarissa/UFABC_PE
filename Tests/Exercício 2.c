// Calcular a media dos numeros positivos, e a media dos numeros negativos.

#include <stdio.h>

int main (){
    int n, i, neg=0, pos=0;
    double mediaP=0, mediaN=0;

    scanf("%d", &n);

    int vetor[n];

    for(i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<n; i++){
        if(vetor[i]<0){
            mediaN += vetor[i];
            neg++;
        }
        else{
            mediaP += vetor[i];
            pos++;
        }
    }

    printf("%.6lf %.6lf\n", (mediaN/neg), (mediaP/pos));
}
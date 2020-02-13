#include <stdio.h>

int contagemTempo(int n, int m, int *casas, int *encomendas){
    int i=0, j=0, k=0;
    int tempo = 0;


    while(j<m){
        if(casas[i] > encomendas[j]){
            tempo += 1;
            i--;
        }
        else if(casas[i] < encomendas[j]){
            tempo += 1;
            i++;
        }
        else{
            j++;
        }
    }

    return tempo;
}

int main (){

    int numCasas, numEncomendas, i;

    scanf("%d", &numCasas);
    scanf("%d", &numEncomendas);

    int casas[numCasas], encomendas[numEncomendas];

    for(i=0; i<numCasas; i++){
        scanf("%d", &casas[i]);
    }

    for(i=0; i<numEncomendas; i++){
        scanf("%d", &encomendas[i]);
    }

    int tempo = contagemTempo(numCasas, numEncomendas, casas, encomendas);

    printf("%d\n", tempo);

    return 0;
}
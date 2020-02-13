#include <stdio.h>
#include<stdbool.h>

void resultado (int vetor[], int numTotal, int numGlobo){

    int i, j, k;
    bool resultado = true;
    int valores[numTotal];

    for(i=0; i<numTotal+1; i++){
        valores[i] = i;
    }

    for(i=0; i<numGlobo; i++){
        for(j=0; j<numGlobo; j++){
            for(k=0; k<numTotal+1; k++){
                if(vetor[i] - vetor[j] == valores[k]){
                    valores[k] = -1;
                    break;
                }
            }
        }
    }


    for(i=0; i<numTotal+1; i++){
        if(valores[i] != -1){
            resultado = false;
        }
    }

    if(resultado == false){
        printf("N\n");
    }
    else{
        printf("Y\n");
    }
}

int main (){

    int numeroTotal, numeroGlobo, i;

    while(numeroTotal != 0 && numeroGlobo !=0){
        scanf("%d", &numeroTotal);
        scanf("%d", &numeroGlobo);

        if(numeroTotal == 0 && numeroGlobo ==0){
            break;
        }

        int vetor[numeroGlobo];

        for(i=0; i<numeroGlobo; i++){
            scanf("%d", &vetor[i]);
        }

        resultado (vetor, numeroTotal, numeroGlobo);
    }

    return 0;
}

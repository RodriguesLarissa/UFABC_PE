#include <stdio.h>
#include <stdlib.h>

int main (){

    int casos, tam, i, j, menores=0, igualdade=0, k=0;
    scanf("%d", &casos);
    double med;

    while(casos > k){
        med = 0;
        scanf("%d", &tam);
        double *v = malloc(tam*sizeof(double));

        for(i=0; i<tam; i++){
            scanf("%lf", &v[i]);
        }

        int x = (tam-1)/2;

        for(i=0; i<tam; i++){
            for(j=0; j<tam; j++){
                if(v[i] <= v[j]){
                    menores++;
                }
                if(v[i] == v[j]){
                    igualdade++;
                }
            }


            if(menores-1 == x || igualdade == tam || igualdade > (tam/2) ||menores-igualdade == x){
                med = v[i];
                break;
            }
            else{
                menores = 0;
                igualdade = 0;
            }
        }

        printf("%.2lf\n" , med);
        k++;
        menores = 0;
        igualdade = 0;
        free(v);

    }

    return 0;
}
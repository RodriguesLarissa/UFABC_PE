/* Implemente as seguintes funções:
● valida: essa função deve alterar uma variável n (inteira) e m (inteira) passadas como
parâmetros de modo que n passa a ser min(n,m) e m passa a ser max(n,m).
● constroi: esta função deve receber valores inteiros n e m e devolve um vetor
v = (n, n+1, n+2, ..., m). É obrigatório usar a função malloc para alocar o
espaço para v.
O seu main deve
1. Ler inteiros n e m.
2. Usar valida para modificar o valor de n e m.
3. Chamar constroi com n e m e guarda o que foi retornado em uma variável.
4. Imprimir o vetor devolvido, um valor por linha. */


#include <stdio.h>
#include <stdlib.h>

void valida(int *n, int *m){
    int aux;
    if(*n>*m){
        aux = *n;
        *n = *m;
        *m = aux;
    }
}

int *constroi(int n, int m, int i, int tam){
    int *z = malloc(sizeof(int)*tam);
    for(i=0; i<tam; i++){
        z[i] = n;
        n++;
    }

    return z;
}

int main (){
    int n, m, *r, i;

    scanf("%d %d", &n, &m);

    valida(&n, &m);

    int tam = m-n+1;

    r = constroi(n, m, i, tam);

    for(i=0; i<tam; i++){
        printf("%d\n", r[i]);
    }
}
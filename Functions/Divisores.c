#include <stdio.h>

// Esta funcao recebe um natural n e devolve a quantidade de divisores pares.
int contaDivisoresPares (int n){
    int count =0;
    for(int i=n; i>0; i--){
        if(n%i == 0 && i%2 ==0){
            count++;
        }
    }

    return count;
}

int main () {
 int n;
 scanf ("%d", &n);
 printf ("%d\n", contaDivisoresPares (n));
 return 0;
}
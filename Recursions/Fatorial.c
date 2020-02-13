#include <stdio.h>

// Esta funcao calcula recursivamente o fatorial de n.
// Recebe um inteiro positivo n e devolve n!.
long long fatorialRecursivo (int n){
    if(n==0){
        return 1;
    }
    else{
        return fatorialRecursivo(n-1) * n;
    }

}

int main () {
 int n;
 scanf ("%d", &n);
 printf ("%lld\n", fatorialRecursivo (n));
 return 0;
}
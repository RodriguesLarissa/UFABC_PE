#include <stdio.h>

// Esta funcao calcula recursivamente a potencia
// de 'a' elevado a 'n'.

long long potenciaRecursivo (int a, int n){
    if(n == 0){
        return 1;
    }
    else{
        return a * potenciaRecursivo(a, n-1);
    }
}

int main () {
 int a, n;
 scanf ("%d", &a);
 scanf ("%d", &n);
 printf ("%lld\n", potenciaRecursivo (a, n));
 return 0;
}
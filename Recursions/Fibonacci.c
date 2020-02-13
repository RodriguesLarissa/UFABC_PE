#include <stdio.h>

// Esta funcao calcula recursivamente o n-esimo termo de Fibonacci.
// Recebe um inteiro positivo n e devolve o valor calculado.

long long fibonacciRecursivo (int n){
    if(n == 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else{
        return fibonacciRecursivo(n-1)+fibonacciRecursivo(n-2);
    }
}

int main () {
 int n;
 scanf ("%d", &n);
 printf ("%lld\n", fibonacciRecursivo (n));
 return 0;
}
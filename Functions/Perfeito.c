#include <stdio.h>
#include <stdbool.h>

// Esta funcao recebe um inteiro n.
// Devolve verdadeiro se n eh perfeito, falso caso contrario.
bool isPerfeito (int n){
    int count = 0;
    for(int i = n-1; i>0; i--){
        if(n%i==0){
            count += i;
        }
    }

    if(count == n){
        return true;
    }
    else{
        return false;
    }
}

int main () {
 int n;
 scanf ("%d", &n);
 if (isPerfeito (n)) {
 printf ("SIM\n");
 }
 else {
 printf ("NAO\n");
 }
 return 0;
}
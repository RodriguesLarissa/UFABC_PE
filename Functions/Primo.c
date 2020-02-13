#include <stdio.h>
#include <stdbool.h>

// Esta funcao recebe um inteiro k.
// Devolve verdadeiro se k eh primo, falso caso contrario.
bool isPrimo (int k){
    for(int i = k-1; i>1; i--){
        if(k%i == 0){
            return false;
        }
    }

    if(k == 1){
        return false;
    }
    else{
        return true;
    }
}

int main () {
 int k;
 scanf ("%d", &k);
 if (isPrimo (k)) {
 printf ("PRIMO\n");
 }
 else {
 printf ("COMPOSTO\n");
 }
 return 0;
}
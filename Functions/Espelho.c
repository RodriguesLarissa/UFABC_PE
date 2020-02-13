#include <stdio.h>
#include <stdbool.h>

// Esta funcao recebe dois inteiros, a e b.
// Devolve verdadeiro se a e b sao espelhos, falso caso contrario.
bool isEspelho (int a, int b){
    int n1, n2, n3, n4, numEspelho;

    n4 = a%10;
    n3 = (a%100)/10;
    n2 = (a%1000)/100;
    n1 = a/1000;

    numEspelho = n4*1000 + n3*100 + n2*10 + n1;

    if(b == numEspelho){
        return true;
    }
    else{
        return false;
    }
}

int main () {
 int a, b;
 scanf ("%d", &a);
 scanf ("%d", &b);
 if (isEspelho (a, b))
 printf ("espelho\n");
 else
 printf ("nao espelho\n");
 return 0;
}
#include <stdio.h>
#include<stdbool.h>

// Esta funcao recebe um inteiro representando o ano.
// Devolve verdadeiro se o ano eh bissexto, falso caso contrario.
bool isBissexto (int ano){
    if(ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)){
        return true;
    }
    else{
        return false;
    }
}

int main () {
 int ano;
 scanf ("%d", &ano);
 if (isBissexto (ano))
 printf ("ANO BISSEXTO\n");
 else
 printf ("ANO NAO BISSEXTO\n");
 return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isPalindromo (char str[201], int i, int j){
    int tam = j;
    if (i<= tam){
        if(str[i] == str[j]){
            isPalindromo(str, i+1, j-1);
            return true;
        }
        else{
            return false;
        }
    }
}

int main () {
 char str[201];
 while (scanf ("%s", str) == 1) {
    if (isPalindromo (str, 0, strlen(str) - 1)) {
    printf ("sim\n");
    }
    else {
    printf ("nao\n");
    }
 }
 return 0;
}
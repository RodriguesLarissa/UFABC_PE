#include <stdio.h>

int main () {

    int anoAtual;
    int anoNasc;
    int idade;
    char nome[61];

    scanf("%d", &anoAtual);
    scanf("%s", nome);
    scanf("%d", &anoNasc);

    idade = anoAtual - anoNasc;

    printf("%s, voce completa %d anos de idade neste ano.\n", nome, idade);

    return 0;

}
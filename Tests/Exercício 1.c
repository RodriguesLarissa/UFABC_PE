/* Dado um inteiro n, considere o seguinte processo:
● Seja m a soma de n com o seu reverso.
○ por exemplo, para n=349 o seu reverso é 943, m = 349 + 943 = 1292
● Se m é um palíndromo (m e seu reverso são iguais), imprima m
Faça um programa que verifica a soma acima. Caso não seja um palíndromo, repita o
procedimento (faça o procedimento no máximo 10 vezes).
Para n =349
● 349 + 943 = 1292 (não é palíndromo, repetir)
● 1292 + 2921 = 4213 (não é palíndromo, repetir)
● 4213 + 3124 = 7337 (palíndromo)
Caso o procedimento não encontrar um palíndromo após 10 vezes, imprima -1. */

#include <stdio.h>
#include <math.h>

int soma(int n, int dig){
    int num = n;
    int n2=0,i;
    for(i=dig; i>0; i--){
        n2 += (n%10)*(pow(10, (dig-1)));
        n /= 10;
        dig--;
    }

    if(num == n2){
        return num;
    }

    int resultado = num+n2;

    return resultado;
}

int palindromo(int soma, int dig){
    int num = soma;
    int i;
    int resultado=0;

    for(i=dig; i>0; i--){
        resultado += (soma%10)*(pow(10, (dig-1)));
        soma /= 10;
        dig--;
    }

    return resultado;
}

int main (){
    int n, dig=0, cont=0;

    scanf("%d", &n);
    int t = n;

    while(t){
        dig++;
        t = t/10;
    }

    while(cont != 10){


        int resultado = soma(n, dig);

        if(resultado == n){
            printf("%d\n", resultado);
            break;
        }

        int t = resultado;
        dig = 0;

        while(t){
            dig++;
            t = t/10;
        }

        int resultado2 = palindromo(resultado, dig);

        if(resultado == resultado2){
            printf("%d\n", resultado);
            break;
        }
        else{
            n = resultado;
        }

        cont++;
    }

    if(cont == 10){
        printf("-1\n");
    }

}
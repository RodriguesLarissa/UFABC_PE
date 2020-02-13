#include<stdio.h>

int primo(int n, int num){
    if(n == 1){
        return 1;
    }
    else{
        if(num%n == 0){
            return 1 + primo(n-1, num);
        }
        else{
            return 0 + primo(n-1, num);
        }
    }
}

int main (){
    int n;

    scanf("%d", &n);

    int divisores = primo(n, n);

    if(divisores == 2){
        printf("PRIMO\n");
    }
    else{
        printf("COMPOSTO\n");
    }

    return 0;
}
#include <stdio.h>

int catalan(int n){
    if(n == 0){
        return 1;
    }
    else if(n>0){
        return ((4*n)-2) * catalan(n-1)/(n+1);
    }
}

int main (){
    int n=0;
    while(n>=0){
        scanf("%d", &n);
        if(n<0){
            break;
        }
        int x = catalan(n);
        printf("%d\n", x);
    }
}
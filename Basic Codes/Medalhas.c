#include <stdio.h>

int main(){

    int t1, t2, t3;

    scanf("%d", &t1);
    scanf("%d", &t2);
    scanf("%d", &t3);

    if(t1 < t2 && t1 < t3){
        if(t2<t3){
            printf("1\n2\n3\n");
        }
        else{
            printf("1\n3\n2\n");
        }
    }
    else if(t2 < t3){
        if(t3 < t1){
            printf("2\n3\n1\n");
        }
        else{
            printf("2\n1\n3\n");
        }
    }
    else{
        if(t1<t2){
            printf("3\n1\n2\n");
        }
        else{
            printf("3\n2\n1\n");
        }
    }

    return 0;
}
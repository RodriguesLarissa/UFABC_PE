#include<stdio.h>

void absoluto (int *v){

    if(*v < 0){
        printf("%d\n", *v*-1);
    }
    else{
        printf("%d\n", *v);
    }
}

int main() {
  int x;
  int n, i;
  scanf("%d", &n);

  for(int i=0; i<n; i++) {
    scanf("%d", &x);
    absoluto(&x);
  }
  return 0;
}
#include<stdio.h>
#include<stdlib.h>

int *combina (int *v, int *w, int n, int m){
    int *z = malloc(sizeof(int)*(n+m));
    int i, j=0;

    for(i=0; i<n; i++){
        z[i] = v[i];
    }

    for(i=m-1; j<m; i--){
        z[n+j] = w[i];
        j++;
    }

    return z;
    free(z);
}

int main() {
  int n, m, i;
  int *v, *w, *r;
  scanf("%d %d", &n, &m);
  v = malloc(sizeof(int) * n);
  w = malloc(sizeof(int) * m);
  for(i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
  for(i = 0; i < m ; i++) {
    scanf("%d", &w[i]);
  }
  r = combina(v, w, n, m);
  for(i = 0; i < n+m-1; i++) {
    printf("%d ", r[i]);
  }
  printf("%d\n", r[n+m-1]);
  free(v);
  free(w);
    free(r);
}
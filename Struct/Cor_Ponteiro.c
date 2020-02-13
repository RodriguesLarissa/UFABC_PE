#include <stdio.h>
#include <stdlib.h>

typedef struct cor_s {
  int *r;
  int *g;
  int *b;
} cor;

int main(void) {
  cor c;
  
  c.r = malloc(sizeof(int));
  c.g = malloc(sizeof(int));
  c.b = malloc(sizeof(int));
  
  scanf("%d", &c.r[0]);
  scanf("%d", c.g);
  scanf("%d", c.b);
  
  printf("r=%d g=%d b=%d\n", *c.r, *c.g, *c.b);
  
  return 0;
}
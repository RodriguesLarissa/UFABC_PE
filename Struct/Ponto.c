#include <stdio.h>
#include <stdbool.h>
#include <math.h>

typedef struct ponto_s{
  double x;
  double y;
}ponto;

typedef struct circulo_s{
  ponto centro;
  double raio;
}circulo;

bool dentro(circulo c, ponto p){
  int distancia;
  distancia = (sqrt(pow((c.centro.x - p.x),2) + pow((c.centro.y - p.y),2)));
  
  if(distancia < c.raio){
    return true;
  }
  else{
    return false;
  }
}

int main(void) {
  circulo c;
  ponto p;
  scanf("%lf %lf", &p.x, &p.y);
  scanf("%lf %lf %lf", &c.centro.x, &c.centro.y, &c.raio); 
  if(dentro(c,p)) printf("DENTRO\n");
  else printf("FORA\n");
  return 0;
}
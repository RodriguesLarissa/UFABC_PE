#include <stdio.h>
#include <math.h>

typedef struct prova_s{
  double notas[100];
  int n;
  double media;
  double minimo;
  double maximo;
  double variancia;
}prova;

int main() {
  
  prova p;
  int n, i;
  
  scanf("%d", &n);
  
  for(i=0; i<n; i++){
    scanf("%lf", &p.notas[i]);
  }
  
  for(i=0; i<n; i++){
    p.media += p.notas[i];
    
    if(i==0){
    p.minimo = p.notas[i];
    p.maximo = p.notas[i];
    }
    else if(p.minimo>p.notas[i]){
      p.minimo = p.notas[i];
    }
    else if(p.maximo<p.notas[i]){
      p.maximo = p.notas[i];
    }
  }
  
  p.media = p.media/n;
  
  for(i=0; i<n; i++){
    p.variancia += (pow((p.notas[i] - p.media), 2));
  }
  
  p.variancia /= (n-1);
  
  printf("%.2lf %.2lf %.2lf %.2lf\n", p.media, p.minimo, p.maximo, p.variancia);
  
  return 0;
}
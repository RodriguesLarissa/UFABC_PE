#include <stdio.h>

typedef struct country_s {
  char sigla[3];
  double populacao;
} country;

void imprime (country c) {
  printf("%s %.1f\n", c.sigla, c.populacao);
}

void troca(country *brasil, country *argentina){
  char aux[3];
  double ax;
  
  for(int i=0; i<3; i++){
    aux[i] = brasil->sigla[i];
    brasil->sigla[i] = argentina->sigla[i];
    argentina->sigla[i] = aux[i];  
  }
  
  ax = brasil->populacao;
  brasil->populacao = argentina->populacao;
  argentina->populacao = ax;
}

int main(void) {
  country brasil = {"BRA", 209.3};
  country argentina = {"ARG", 44.2};
  
  imprime(brasil);
  imprime(argentina);
  
  troca(&brasil, &argentina);
  
  imprime(brasil);
  imprime(argentina);
  return 0;
}
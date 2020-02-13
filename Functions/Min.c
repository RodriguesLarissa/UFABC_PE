#include <stdio.h>

// Este procedimento não recebe nenhum parametro.
// Ele deve fazer a leitura dos dados pelo teclado.
// Imprime a saida requisitada.
void imprimeMin (){
 int numero;
 int minimo;

 scanf("%d", &numero);
 minimo = numero;

 if(minimo<0){
  printf("nenhum numero informado\n");
 }
 else{
  while(numero>=0){
   if(minimo > numero){
    minimo = numero;
   }
   scanf("%d", &numero);
  }
  printf("%d\n", minimo);
 }
}

int main () {
 imprimeMin ();
 return 0;
}
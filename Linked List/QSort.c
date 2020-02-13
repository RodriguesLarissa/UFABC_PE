#include <stdio.h>
#include <stdlib.h>

typedef struct aluno_s{
  int nota;
  int ano;
}aluno;

int comp_nota(const void* a, const void* b){
  aluno *a_aluno = (aluno *) a;
  aluno *b_aluno = (aluno *) b;
  return b_aluno->nota - a_aluno->nota;
}

int comp_ano(const void* a, const void* b){
  aluno *a_aluno = (aluno *) a;
  aluno *b_aluno = (aluno *) b;
  return a_aluno->ano - b_aluno->ano;
}

void imprime(aluno *alunos, int n){
  for(int i=0; i<n; i++){
    printf("%d %d\n", alunos[i].nota, alunos[i].ano);
  }
}

int main() {
  int n,i;
  scanf("%d", &n);
  
  aluno *alunos = malloc(sizeof(aluno)*n);
  
  for(i=0; i<n; i++){
    scanf("%d", &alunos[i].nota);
    scanf("%d", &alunos[i].ano);
  }
  
  qsort(alunos, n, sizeof(aluno), comp_ano);
  qsort(alunos, n, sizeof(aluno), comp_nota);
  imprime(alunos, n);
  
  return 0;
}
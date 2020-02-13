/* Neste exercício, a estrutura lista mantém um ponteiro para o primeiro elemento e para o último elemento.
Em sala, cada nó que adicionamos é colocado no começo da lista. 
Neste exercício, preencha a função adiciona de modo que o novo nó é adicionado no fim da lista. */

void adiciona (int v, lista *lt){
  node *novo = malloc(sizeof(node));
  novo->v = v;
  novo->prox = NULL;
  if(lt->primeiro == NULL){
    lt->primeiro = novo;
    lt->ultimo = novo;
  }
  else{
    lt->ultimo->prox = novo;
    lt->ultimo = novo;
  }
}
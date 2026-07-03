#include "listaEncadeada.h"

#include <stdlib.h>

// Verifica se a lista está vazia
// Entrada: lista
// Retorno: 1 se a lista é vazia ou 0 caso contrário
// Pré-condição: nenhuma
// Pós-condição: nenhuma
int vazia(Lista* l) {
    return (l == NULL);
}

// Insere um nó na lista
// Entrada: lista e o elemento a ser inserido
// Retorno: lista atualizada
// Pré-condição: nenhuma
// Pós-condição: a lista é alterada
Lista* inserir(Lista* l, TipoItem info) {
    Lista* aux = malloc(sizeof(Lista));

    if( aux == NULL) {
        printf("Erro de alocação");
        return l;
    }

    aux->info = info;
    aux->prox = NULL;

    if(vazia(l))    // a lista está vazia, faz a inserção do primeiro nó
        return aux;
    else {  // caso a lista não seja vazia, faz a inserção na cauda
        Lista* ant = NULL;
        Lista* p = l;

        while(p != NULL) { // localiza o último elemento da lista
            ant = p;
            p = p->prox;
        }

        ant->prox = aux;    // faz a inserção do elemento na cauda

        return l;
    }
}

// Libera todos os nós da lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: toda a memória ocupada pela lista é liberada
void liberar(Lista* l) {
    Lista* aux;
    while(l != NULL) {
        aux = l;
        l = l->prox;
        free(aux);
    }
}
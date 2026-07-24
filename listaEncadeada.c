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

// Insere um elemento na cauda da lista
// Entrada: lista e o elemento a ser inserido
// Retorno: lista atualizada
// Pré-condição: nenhuma
// Pós-condição: um novo elemento é adicionado na cauda da lista
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

// Imprime todos os elementos da lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: os elementos da lista são exibidos no console
void imprimir(Lista* l) {
    if(vazia(l))
        printf("Lista vazia.\n");
    else {
        printf("[ ");
        while(l != NULL) {
             printf("%d ", l->info);
             l = l->prox;   // lista recebe o próximo nó da lista
        }
         printf("]\n");
    }
}

// Remove um elemeto da lista
// Entrada: lista e o elemento a ser removido
// Retorno: lista atualizada
// Pré-condição: nenhuma
// Pós-condição: o elemento é removido da lista
Lista* remover(Lista* l, TipoItem x) {
    if(vazia(l))    // verifica se a lista é vazia
        printf("Lista vazia.\n");
    else {
        Lista* ant = NULL;
        Lista* p = l;

        while(p != NULL && p->info != x) {  // localiza o elemento na lista
            ant = p;
            p = p->prox;
        }

        if(p != NULL) { // elemento encontrado
            if(p == l)  // remoção na cabeça
                l = l->prox;
            else if(p->prox == NULL)    // remoção na cauxa
                ant->prox = NULL;
            else    // remoção no meio
                ant->prox = p->prox;
            free(p);    // libera o nó do elemento removido
        }
        else
            printf("Elemento não encontrado.\n");
    }
    return l;
}

// Faz a soma dos elementos da lista
// Entrada: lista
// Retorno: o valor da soma dos elementos da lista
// Pré-condição: nenhuma
// Pós-condição: nenhuma
int soma(Lista* l) {
    int res = 0;
    
    while(l != NULL) {
        res += l->info;
        l = l->prox;
    } 

    return res;
}
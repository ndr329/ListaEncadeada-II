#ifndef listaEncadeada_h
#define listaEncadeada_h

#include <stdio.h>

typedef int TipoItem;   // define o tipo de elemento da lista

// Declaração de um estrutura nó
struct no {
    TipoItem info;
    struct no* prox;
};
typedef struct no Lista;    // define a estrutura nó como Lista

// Verifica se a lista está vazia
// Entrada: lista
// Retorno: 1 se a lista é vazia ou 0 caso contrário
// Pré-condição: nenhuma
// Pós-condição: nenhuma
int vazia(Lista* l);

// Insere um nó na lista
// Entrada: lista e o elemento a ser inserido
// Retorno: lista atualizada
// Pré-condição: nenhuma
// Pós-condição: a lista é alterada
Lista* inserir(Lista* l, TipoItem info);

// Libera todos os nós da lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: toda a memória ocupada pela lista é liberada
void liberar(Lista* l);

// Imprime todos os elementos da lista
// Entrada: lista
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: os elementos da lista são exibidos no console
void imprimir(Lista* l);

#endif /* listaEncadeada_h */
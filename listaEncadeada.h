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



#endif /* listaEncadeada_h */
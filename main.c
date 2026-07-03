#include <stdio.h>

#include "listaEncadeada.h"

int main(int argc, const char* argv[]) {
    Lista* l = NULL;

    l = inserir(l, 2);
    l = inserir(l, 7);
    l = inserir(l, 11);
    l = inserir(l, 24);
    imprimir(l);

    l = remover(l, 11);
    imprimir(l);

    l = inserir(l, 33);
    l = inserir(l, 45);
    imprimir(l);

    l = remover(l, 33);
    imprimir(l);

    liberar(l);
    l = NULL;

    printf("\n");
    return 0;
}
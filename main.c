#include <stdio.h>

#include "listaEncadeada.h"

int main(int argc, const char* argv[]) {
    Lista* l = NULL;

    l = inserir(l, 2);
    l = inserir(l, 7);
    l = inserir(l, 11);
    l = inserir(l, 24);

    liberar(l);
    l = NULL;

    printf("\n");
    return 0;
}
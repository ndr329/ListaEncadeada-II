#include "utils.h"

#include "listaEncadeada.h"

// Exibe o menu de opções do usuário
// Entrada: nenhum
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: nenhuma
void menu(void) {
    Lista* l = NULL;
    TipoItem  x = 0;
    int op = -1;

    while (op != 0) {
        printf("\nEscolha uma das opções:\n\n");
        printf("1. Inserir um elemento na lista\n");
        printf("2. Exibir a lista\n");
        printf("3. Remover um elemento da lista\n");
        printf("0. Encerrar o programa\n");
        printf("\nOpção: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Digite o valor do elemento: ");
                scanf("%d", &x);
                l = inserir(l, x);
                break;

            case 2:
                printf("Lista: ");
                imprimir(l);
                break;

            case 3:
                printf("Digite o valor do elemento: ");
                scanf("%d", &x);
                l = remover(l, x);
                break;

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida.\n");
                break;

        }
    }

    liberar(l);
    l = NULL;
}
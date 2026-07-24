# Lista Encadeada Simples

## Descrição

Implementação de uma **lista encadeada simples** em linguagem C. A estrutura 
permite a alocação dinâmica de elementos inteiros. E realiza operações básicas
de manipulação de lista. Como inserir, imprimir, remover, soma dos elementos e 
liberação da memória alocada.

---

## Estrutura da Lista

Cada elemento da lista é representado por um nó contendo:

- um valor inteiro (`TipoItem`);
- um ponteiro para próximo nó da lista.

```c
typedef int TipoItem;

struct no {
    TipoItem info;
    struct no* prox;
};
typedef struct no Lista;
```

---

## Funcionalidades

O projeto implementa as seguintes funcionalidades:

|   Função    | Descrição |
|-------------|-----------|
| `vazia()`   | verifica se a lista está vazia; |
| `inserir()` | insere um elemento no final da lista; |
| `imprimir()`| exibe todos os elementos da lista; |
| `remover()` | remove a primeira ocorrência de um elemento informado; |
| `soma()`.   | exibe a soma de todos elementos da lista. |
| `liberar()` | libera toda memória utilizada pela lista. |

---

## Estrutura do Projeto

```
.
|- main.c
|- listaEncadeada.h
|- listaEncadeada.c
|- utils.h
|- utils.c
|- README.txt

```

---

## Compilação

Utilizando o GCC:

```bash
gcc *.c -o listaEncadeada
```

---

## Execução

Linux/macOS:

```bash
./listaEncadeada
```

Windows:

```cmd
listaEncadeada.exe
````

---

## Autor

André Brandão
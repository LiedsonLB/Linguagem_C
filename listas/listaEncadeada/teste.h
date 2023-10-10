#include<stdio.h>

typedef struct {
    char nome[30];
    int codigo;
    float preco;
} Produto;

typedef struct {
    Produto produto;
    struct no* prim;
    struct no* fim;
} Lista;

typedef struct no {
    Produto produto;
    struct no* prox;
} No;

Lista criarLista();
void inserirFinal(Lista* lista, Produto produto);
void inserirIncio(Lista* lista, Produto produto);
void inserirNaPosicao(Lista* lista, Produto produto, int position);
void removerInicio(Lista* lista);
void removerFinal(Lista* lista);
void imprimir(Lista* lista);
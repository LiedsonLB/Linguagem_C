#include<stdlib.h>
#include "compras.h"

Lista criarLista(){
    Lista* lista = (Lista*)malloc(sizeof(Lista));
    lista->produto.nome[30] = "\0";
    lista->produto.codigo = 0;
    lista->produto.preco = 0.0;
    lista->prim = NULL;
    return *lista;
}
void verificarLista(Lista lista){
    if(lista.prim == NULL){
        return printf("A lista esta vazia");
    }
    return printf("Existe elementos na lista");
}
void inserirInicio(Lista* lista, Produto produto){
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->produto = produto;
    if(lista->prim == NULL){
        lista->prim = novoNo;
        novoNo->prox = NULL;
    }
    novoNo->prox = lista->prim;
    lista->prim = novoNo;
}
void inserirFinal(Lista* lista, Produto produto){
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->produto = produto;
    No* aux = (No*)malloc(sizeof(No));
    aux = lista->prim;
    while(aux->prox != NULL){
        aux = aux->prox;
    }
    aux->prox = novoNo;
    novoNo->prox = NULL;
}
void inserirPosicao(Lista* lista, Produto produto, int position){
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->produto = produto;
    No* aux = (No*)malloc(sizeof(No));
    while(aux != NULL){
        aux = aux->prox;
    }
}

void removerInicio(Lista* lista) {
    if (lista->prim == NULL) {
        printf("A lista esta vazia\n");
    }

    No* primeiroNo = lista->prim;
    lista->prim = primeiroNo->prox;
    free(primeiroNo);
    printf("Elemento removido do início da lista\n");
}

void removeFinal(Lista* lista) {
    if (lista->prim == NULL) {
        printf("A lista esta vazia\n");
    }

    No* noAtual = lista->prim;
    No* noAnterior = NULL;

    while (noAtual->prox != NULL) {
        noAnterior = noAtual;
        noAtual = noAtual->prox;
    }

    if (noAnterior != NULL) {
        noAnterior->prox = NULL;
    } else {
        lista->prim = NULL;
    }

    free(noAtual);
    printf("Elemento removido do final da lista\n");
}

void removerPosicao(Lista* lista, int position) {
    if (lista->prim == NULL) {
        printf("A lista esta vazia\n");
        return;
    }

    if (position < 0) {
        printf("Posição inválida\n");
        return;
    }

    No* noAtual = lista->prim;
    No* noAnterior = NULL;
    int currentPosition = 0;

    while (noAtual != NULL && currentPosition < position) {
        noAnterior = noAtual;
        noAtual = noAtual->prox;
        currentPosition++;
    }

    if (noAtual == NULL) {
        printf("Posição não encontrada na lista\n");
        return;
    }

    if (noAnterior != NULL) {
        noAnterior->prox = noAtual->prox;
    } else {
        lista->prim = noAtual->prox;
    }

    free(noAtual);
    printf("Elemento removido da posição %d\n", position);
}

void imprimirLista(Lista lista){
    No* noAtual = lista.prim;

    while (noAtual != NULL) { 
        printf("Nome: %d\n", noAtual->produto.nome);
        printf("Codigo: %s\n", noAtual->produto.codigo);
        printf("Preco: %.2f", noAtual->produto.preco);
        
        noAtual = noAtual->prox;
    }
}

void tamanhoLista(Lista lista){
    No* contador = lista.prim;
    int numElementos = 0;

    while (contador != NULL) { 
        numElementos++;

        contador = contador->prox;
    }
    return printf("A lista tem %d", numElementos);
}

void inverterLista(Lista* lista) {
    No* prev = NULL;
    No* current = lista->prim;
    No* next;

    while (current != NULL) {
        next = current->prox;
        current->prox = prev;
        prev = current;
        current = next;
    }

    lista->prim = prev;
}

void listaImpar(Lista* lista) {
    Lista lista2 = criarLista();
    No* aux = lista->prim;
    int contador = 0;

    while (aux != NULL) {
        if (contador % 2 != 0) {
            inserirFinal(&lista2, aux->produto);
        }
        contador++;
        aux = aux->prox;
    }

    printf("Elementos com índices ímpares:\n");
    imprimirLista(lista2);
}

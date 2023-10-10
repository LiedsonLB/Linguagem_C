#include<stdio.h>
#include<stdlib.h>
#include "teste.h"

Lista criarLista() {
    Lista* lista = (Lista*)malloc(sizeof(Lista));
    lista->produto.nome[0] = '\0';
    lista->produto.codigo = 0;
    lista->produto.preco = 0.0;
    lista->prim = NULL;
    lista->fim = NULL;
    return *lista;
}
void inserirFinal(Lista* lista, Produto produto) {
    
}
void inserirIncio(Lista* lista, Produto produto) {
    
}
void inserirNaPosicao(Lista* lista, Produto produto, int position) {

}
void removerInicio(Lista* lista) {

}
void removerFinal(Lista* lista) {

}
void imprimir(Lista* lista) {
    
}
#include<stdio.h>
#include "aluno.h"

Lista* criarLista(){
    Lista* novaLista = (Lista*)malloc(sizeof(Lista));
    novaLista->aluno.matricula = 0;
    novaLista->aluno.nome[0] = '\0';
    novaLista->aluno.notas[0] = novaLista->aluno.notas[1] = novaLista->aluno.notas[2] = 0.0;
    novaLista->prim = NULL;
    return novaLista;
};
void inserirInicio(Lista* lista, Aluno aluno){
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->aluno = aluno;
    if(lista->prim == NULL){
        lista->prim = novoNo;
        novoNo->prox = novoNo;
    }
    novoNo->prox = lista->prim;
    lista->prim = novoNo;
}
void inserirPosicao(Lista* lista, Aluno aluno, int position){
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->aluno = aluno;
    if(lista->prim == NULL){
        lista->prim = novoNo;
        novoNo->prox = novoNo;
    }
    No* aux = lista->prim;
    No* ant;
    int count = 0;
    while(count != position)
    {
        if(aux->prox != lista->prim){
            printf("Posicao nao existe");
            return;
        }
        ant = aux;
        aux = aux->prox;
        count++;
    }
    ant->prox = novoNo;
    novoNo->prox = aux;
}
void inserirFinal(Lista* lista, Aluno aluno){
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->aluno = aluno;
    if(lista->prim == NULL){
        lista->prim = novoNo;
        novoNo->prox = novoNo;
    }
    No* aux = lista->prim;
    while(aux->prox != lista->prim)
    {
        aux = aux->prox;   
    }
    aux->prox = novoNo;
    novoNo->prox = lista->prim;
}
void removerInicio(Lista* lista){
    if(lista->prim == NULL){
        return;
    }
    No* aux = lista->prim;
    lista->prim = aux->prox;
    free(aux);
}
void removerPosicao(Lista* lista, int position){
    if(lista->prim == NULL){
        return;
    }
    No* aux = lista->prim;
    No* ant;
    int count = 0;
    while(count != position)
    {
        if(aux->prox != lista->prim){
            printf("Posicoo nao existe");
            return;
        }
        No* ant = aux;
        aux = aux->prox;
        count++;
    }
    ant->prox = aux->prox;
    free(aux);
}
void removerFinal(Lista* lista){
    if(lista->prim == NULL){
        return;
    }
    No* aux = lista->prim;
    No* ant;
    while(aux->prox != lista->prim)
    {
        ant = aux;
        aux = aux->prox;
    }
    ant->prox = lista->prim;
    free(aux);
}
void imprimirLista(Lista* lista){
    No* aux = lista->prim;
    if (aux == NULL) {
        printf("A lista esta vazia.\n");
        return;
    }
    do {
        printf("Nome: %s\n", aux->aluno.nome);
        printf("Matricula: %d\n", aux->aluno.matricula);
        printf("Notas: %.2f, %.2f, %.2f\n", aux->aluno.notas[0], aux->aluno.notas[1], aux->aluno.notas[2]);
        aux = aux->prox;
    } while (aux != lista->prim);
}
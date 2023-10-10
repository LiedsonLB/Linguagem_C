#include "aluno.h"

Lista* criarLista(){
    Lista* novaLista = (Lista*)malloc(sizeof(Lista));
    novaLista->aluno.matricula = 0;
    novaLista->aluno.nome[0] = '\0';
    novaLista->aluno.notas[0] = novaLista->aluno.notas[1] = novaLista->aluno.notas[2] = 0.0;
    novaLista->prim = NULL;
    novaLista->fim = NULL;
    return novaLista;
};
void inserirInicio(Lista* lista, Aluno aluno) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->aluno = aluno;
    if(lista->prim == NULL){
        lista->prim = novoNo;
        novoNo->prox = NULL;
        novoNo->ant = NULL;
    } else {
        novoNo->prox = lista->prim;
        lista->prim = novoNo;
        lista->prim->ant = novoNo;
        novoNo->ant = NULL;
    };
};
void inserirFinal(Lista* lista, Aluno aluno){
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->aluno = aluno;
    if (novoNo == NULL) {
        fprintf(stderr, "Erro: Falha na alocação de memória.\n");
        exit(1);
    }
    if(lista->prim == NULL){
        lista->prim = novoNo;
        lista->fim = novoNo;
        novoNo->ant = NULL;
        novoNo->prox = NULL;
    } else {
        No* aux = (No*)malloc(sizeof(No));
        aux = lista->prim;
        while (aux->prox != NULL) {
            aux = aux->prox;
        };
        aux->prox = novoNo;
        novoNo->ant = aux;
        novoNo->prox = NULL;
        lista->fim = novoNo;
    };
};
void combinarListas(Lista* A, Lista* B){
    No* auxA = A->prim;
    No* auxB = B->prim;
    while(auxA != NULL){
        Aluno aluno = auxA->aluno;
        inserirFim(B, aluno);
        auxA = auxA->prox;
    }
    while(auxB != NULL){
        printf("%i\n", auxB->aluno.matricula);
        auxB = auxB->prox;
    }
}
void inversoLista(Lista lista){
    No* aux = lista.fim;
    while(aux != NULL){
        printf("%i\n", aux->aluno.matricula);
        aux = aux->ant;
    }
}
void imprimirLista(Lista lista) {
    No* noAtual = lista.prim;

    while (noAtual != NULL) {
        /* Imprime as informações */
        printf("---------------------------------------------\n");
        printf("Matricula: %d\n", noAtual->aluno.matricula);
        printf("Nome: %s\n", noAtual->aluno.nome);
        printf("Notas: %.2f, %.2f, %.2f\n", noAtual->aluno.notas[0], noAtual->aluno.notas[1], noAtual->aluno.notas[2]);
        printf("---------------------------------------------\n");

        noAtual = noAtual->prox; // Avance para o próximo nó
    }
}
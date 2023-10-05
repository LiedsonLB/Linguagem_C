#include "aluno.h"

TLista* criarLista(){
    TLista* novaLista = (TLista*)malloc(sizeof(TLista)); // aqui eu aloco memoria para criação da lista
    /* Inicializa as informações como zerada para um novo elemento */
    novaLista->aluno.matricula = 0;
    novaLista->aluno.nome[0] = '\0';
    novaLista->aluno.notas[0] = novaLista->aluno.notas[1] = novaLista->aluno.notas[2] = 0.0;
    /* Inicio a posição como nula na lista vazia*/
    novaLista->prim = NULL;
    novaLista->fim = NULL;
    return novaLista; // retorno a lista criada
}
void inserirInicio(TLista* lista, Taluno aluno){
    TNo* novo = (TNo*)malloc(sizeof(TNo)); // aqui eu aloco memoria para criar um novo No de Aluno
    novo->aluno = aluno; // aqui eu repasso a informação de de aluno para um novo aluno
    if (lista->prim == NULL) { // aqui eu verifico se existe um elemento na lista
        lista->prim = lista->fim = novo; // aqui eu repasso o No de aluno para um inicio vazio, quando estiver vazio ele coloca aluno no Inicio e Fim
        novo->next = NULL; // aqui repasso proximo como nulo por existir apenas um aluno
    } else {
        novo->next = lista->prim; // o proximo do elemento novo é o primeiro que estava na lista
        lista->prim = novo; // o primeiro da lista agora é o novo
    }
}
void inserirFinal(TLista* lista, Taluno aluno){
    TNo* novoNo = (TNo*)malloc(sizeof(TNo));
    novoNo->aluno = aluno;
    if(lista->prim == NULL){
        lista->prim = novoNo;
        lista->fim = novoNo;
        novoNo->next = NULL;
    } else {
        lista->fim->next = novoNo;
        novoNo->next = NULL;
        lista->fim = novoNo;
    }
}
void removerFinal(TLista* lista){
    TNo* noRemove = lista->prim;
    TNo* ant;
    
    if(lista->prim == NULL){
        return;
    }

    while(noRemove->next != NULL)
    {
        ant = noRemove;
        noRemove = noRemove->next;
    }
    if(ant = NULL){
        lista->prim = NULL;
        lista->fim = NULL;
        free(noRemove);
    }
    ant->next = NULL;
    lista->fim = ant;
    free(noRemove);
}
void removerMatricula(TLista* lista, int matricula) {
    if (lista->prim == NULL) {
        // A lista está vazia, não tem nada para remover.
        return;
    }

    TNo* noAnterior = NULL; // Para acompanhar o nó anterior ao nó que estamos verificando.
    TNo* noAtual = lista->prim; // Começa pelo primeiro nó da lista.

    // Percorre a lista até encontrar o nó com a matrícula desejada ou chegar ao final da lista.
    while (noAtual != NULL && noAtual->aluno.matricula != matricula) {
        noAnterior = noAtual;
        noAtual = noAtual->next;
    }

    if (noAtual == NULL) {
        // Não encontrou um nó com a matrícula desejada não tem nada para remover.
        return;
    }

    // Remoção do nó encontrado.
    if (noAnterior == NULL) {
        // O nó a ser removido é o primeiro da lista.
        lista->prim = noAtual->next;
    } else {
        // O nó a ser removido não é o primeiro da lista.
        noAnterior->next = noAtual->next;
    }

    // Se o nó removido também for o último nó da lista atualiza lista->fim.
    if (noAtual == lista->fim) {
        lista->fim = noAnterior;
    }

    // Libera a memória alocada para o nó que foi removido.
    free(noAtual);
}
void imprimirLista(TLista lista){
    TNo* noAtual = lista.prim; // o atual começa como primeiro nó da lista

    while (noAtual != NULL) { // Percorra a lista até que o ultimo nó da lista atual seja NULL
        /* Imprime as informações */
        printf("Matricula: %d\n", noAtual->aluno.matricula);
        printf("Nome: %s\n", noAtual->aluno.nome);
        printf("Notas: %.2f, %.2f, %.2f\n", noAtual->aluno.notas[0], noAtual->aluno.notas[1], noAtual->aluno.notas[2]);

        noAtual = noAtual->next; // O atual vira o próximo número
    }
}
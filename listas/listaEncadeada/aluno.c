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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula;
    float notas[3];
    char nome[30];
} Aluno;

typedef struct {
    Aluno aluno;
    struct no* prim;
    struct no* fim;
} Lista;

typedef struct no {
    Aluno aluno;
    struct no* ant;
    struct no* prox;
} No;

Lista* criarLista();
void inserirInicio(Lista *lista, Aluno aluno);
void inserirFinal(Lista *lista, Aluno aluno);
void imprimirLista(Lista lista);

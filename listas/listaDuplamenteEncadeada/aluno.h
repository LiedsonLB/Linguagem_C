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
    No* prim;
    No* fim;
} Lista;

typedef struct no {
    Aluno aluno;
    No* ant;
    No* prox;
} No;

Lista* criarLista();
void inserirInicio(Lista *lista, Aluno aluno);
void inserirFinal(Lista *lista, Aluno aluno);
void combinarListas(Lista* A, Lista* B);
void inversoLista(Lista lista);
void imprimirLista(Lista lista);
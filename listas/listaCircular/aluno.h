#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    int matricula;
    float notas[3];  
} Aluno;

typedef struct {
    Aluno aluno;
    struct no* prim;
} Lista;

typedef struct no {
    Aluno aluno;
    struct no* prox;
} No;

Lista* criarLista();
void inserirInicio(Lista* lista, Aluno aluno);
void inserirPosicao(Lista* lista, Aluno aluno, int position);
void inserirFinal(Lista* lista, Aluno aluno);
void removerInicio(Lista* lista);
void removerPosicao(Lista* lista, int position);
void removerFinal(Lista* lista);
void imprimirLista(Lista* lista);
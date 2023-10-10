#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Informações do aluno */
typedef struct {
    int matricula;
    float notas[3];
    char nome[50];
} Taluno;

/* Estrutura da lista de aluno que recebe aluno e as posições de primeiro e ultimo */
typedef struct {
    Taluno aluno;
    TNo* prim;
    TNo* fim;
} TLista;

/* Crio o No que guarda o ponteiro do aluno e próximo aluno */
typedef struct No {
    Taluno aluno;
    TNo* next;
} TNo;

/* Funções */
TLista* criarLista();
void inserirInicio(TLista* lista, Taluno aluno);
void inserirFinal(TLista* lista, Taluno aluno);
void removerFinal(TLista* lista);
void imprimirLista(TLista lista);
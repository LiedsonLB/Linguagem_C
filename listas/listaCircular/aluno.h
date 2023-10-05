#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char aluno[30];
    int matricula;
    float notas[3];  
} Aluno;

typedef struct {
    no* prim;
} Lista;

typedef struct no
{
    Aluno aluno;
    no* prox;
} No;

No criarNo(Aluno aluno){
    No* newNode = (No*) malloc(sizeof(No));
    if(newNode == NULL){
        printf("Erro de memoria");
        exit(1);
    }
    newNode->aluno = aluno;
    newNode->prox = NULL;
    return newNode;
};


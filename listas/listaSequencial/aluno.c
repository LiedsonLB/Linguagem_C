#include "aluno.h"
#include <stdio.h>

ListaAlunos criarLista() {
    ListaAlunos lista;
    lista.tamanho = 0;
    return lista;
}
int inserirNoInicio(ListaAlunos *lista, Aluno aluno) {
    if(lista->tamanho >= MAX_ALUNOS){
        return 0;
    }
    for(int i = lista->tamanho; i > 0; i--) {
        lista->alunos[i] = lista->alunos[i - 1];
    }
    lista->alunos[0] = aluno;
    lista->tamanho++;
    return 1;
}
int inserirNoFim(ListaAlunos *lista, Aluno aluno) {
    if (lista->tamanho >= MAX_ALUNOS) {
        return 0;
    }
    lista->alunos[lista->tamanho] = aluno;
    lista->tamanho++;
    return 1;
}
int inserirNaPosicao(ListaAlunos *lista, Aluno aluno, int posicao) {
    if (posicao < 0 || posicao > lista->tamanho || lista->tamanho >= MAX_ALUNOS) {
        return 0;
    }
    
    for (int i = lista->tamanho; i > posicao; i--) {
        lista->alunos[i] = lista->alunos[i - 1];
    }
    
    lista->alunos[posicao] = aluno;
    lista->tamanho++;
    return 1;
}
int removerNaPosicao(ListaAlunos *lista, int posicao) {
    if (posicao < 0 || posicao >= lista->tamanho) {
        return 0;
    }

    for (int i = posicao; i < lista->tamanho - 1; i++) {
        lista->alunos[i] = lista->alunos[i + 1];
    }
    
    lista->tamanho--;
    return 1;
}
int removerPorMatricula(ListaAlunos *lista, int matricula) {
    for (int i = 0; i < lista->tamanho; i++) {
        if (lista->alunos[i].matricula == matricula) {
            return removerNaPosicao(lista, i);
        }
    }
    return 0;
}
Aluno buscarPorMatricula(ListaAlunos lista, int matricula) {
    for (int i = 0; i < lista.tamanho; i++) {
        if (lista.alunos[i].matricula == matricula) {
            return lista.alunos[i];
        }
    }
    
    Aluno alunoNulo;
    alunoNulo.matricula = -1;
    return alunoNulo;
}
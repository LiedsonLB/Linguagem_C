#include <stdio.h>
#include "aluno.h"

int main()
{
    ListaAlunos lista = criarLista();

    Aluno aluno1 = {1, "Jorge"};
    Aluno aluno2 = {2, "Matheus"};
    Aluno aluno3 = {3, "Cristiano Ronaldo"};
    Aluno aluno4 = {4, "Davi"};
    Aluno aluno5 = {5, "Cnpjoto"};

    inserirNoFim(&lista, aluno1);
    inserirNoFim(&lista, aluno2);
    inserirNoFim(&lista, aluno3);

    printf("Lista de Alunos:\n");
    for (int i = 0; i < lista.tamanho; i++)
    {
        printf("Matricula: %d, Nome: %s\n", lista.alunos[i].matricula, lista.alunos[i].nome);
    }
    printf("\n");

    printf("Adicionando aluno 5 no inicio\n");
    inserirNoInicio(&lista, aluno5);

    printf("Inserindo aluno na posicao 2\n");
    inserirNaPosicao(&lista, aluno4, 2);
    printf("\n");

    printf("Lista de Alunos:\n");
    for (int i = 0; i < lista.tamanho; i++)
    {
        printf("Matricula: %d, Nome: %s\n", lista.alunos[i].matricula, lista.alunos[i].nome);
    }
    printf("\n");

    int matriculaBuscada = 2;
    Aluno alunoEncontrado = buscarPorMatricula(lista, matriculaBuscada);
    if (alunoEncontrado.matricula != -1)
    {
        printf("Aluno encontrado - Matricula: %d, Nome: %s\n", alunoEncontrado.matricula, alunoEncontrado.nome);
    }
    else
    {
        printf("Aluno com matricula %d nao encontrado.\n", matriculaBuscada);
    }
    printf("\n");

    int matriculaRemover = 2;
    if (removerPorMatricula(&lista, matriculaRemover))
    {
        printf("Aluno com matricula %d removido.\n", matriculaRemover);
    }
    else
    {
        printf("Aluno com matricula %d nao encontrado para remocao.\n", matriculaRemover);
    }
    printf("\n");

    printf("Lista de Alunos Apos Remocao:\n");
    for (int i = 0; i < lista.tamanho; i++)
    {
        printf("Matricula: %d, Nome: %s\n", lista.alunos[i].matricula, lista.alunos[i].nome);
    }
    printf("\n");

    return 0;
}

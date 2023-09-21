#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

int main() {
    Lista* lista = criarLista();
    Aluno aluno;

    aluno.matricula = 1;
    strcpy(aluno.nome, "Liedson");
    aluno.notas[0] = 10;
    aluno.notas[1] = 9;
    aluno.notas[2] = 8;

    Aluno aluno2;

    aluno2.matricula = 2;
    strcpy(aluno2.nome, "Liedson inicio");
    aluno2.notas[0] = 10;
    aluno2.notas[1] = 10;
    aluno2.notas[2] = 10;

    Aluno aluno3;

    aluno3.matricula = 3;
    strcpy(aluno3.nome, "Liedson 3");
    aluno3.notas[0] = 8;
    aluno3.notas[1] = 9;
    aluno3.notas[2] = 10;

    inserirInicio(lista, aluno);
    inserirInicio(lista, aluno3);
    inserirFinal(lista, aluno2);
    imprimirLista(*lista);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

int main() {
    TLista* lista = criarLista();
    Taluno aluno;
    Taluno aluno2;

    aluno.matricula = 1;
    strcpy(aluno.nome, "Liedson");
    aluno.notas[0] = 10;
    aluno.notas[1] = 9;
    aluno.notas[2] = 8;

    aluno2.matricula = 2;
    strcpy(aluno2.nome, "Motorolo");
    aluno2.notas[0] = 10;
    aluno2.notas[1] = 9;
    aluno2.notas[2] = 8;

    inserirInicio(lista, aluno);
    inserirInicio(lista, aluno2);
    removerFinal(lista);
    imprimirLista(*lista);

    return 0;
}
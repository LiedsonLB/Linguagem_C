#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

int main() {
    TLista* lista = criarLista();
    Taluno aluno;

    aluno.matricula = 1;
    strcpy(aluno.nome, "Liedson");
    aluno.notas[0] = 10;
    aluno.notas[1] = 9;
    aluno.notas[2] = 8;

    inserirInicio(lista, aluno);
    removerFinal(lista);
    imprimirLista(*lista);

    return 0;
}
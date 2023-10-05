#include <stdio.h>
#include <string.h>
#include "compras.h"

int main() {
    Lista lista = criarLista();

    // produto 1
    Produto produto1;
    strcpy(produto1.nome, "Balinha de Tutti fruto");
    produto1.codigo = 654234;
    produto1.preco = 1.50;

    // produto 2
    Produto produto2;
    strcpy(produto2.nome, "Fanto laranjo 2L");
    produto2.codigo = 765090;
    produto2.preco = 7.00;

    // produto 3
    Produto produto3;
    strcpy(produto3.nome, "Mortadelo");
    produto3.codigo = 456990;
    produto3.preco = 12.00;

    // produto 4
    Produto produto4;
    strcpy(produto3.nome, "Danono");
    produto3.codigo = 534875;
    produto3.preco = 8.00;

    verificarLista(lista);

    inserirFinal(&lista, produto1);
    inserirFinal(&lista, produto3);
    inserirInicio(&lista, produto2);
    inserirPosicao(&lista, produto4, 2);

    inverterLista(&lista);
    listaImpar(&lista);

    verificarLista(lista);
    tamanhoLista(lista);
    imprimirLista(lista);

    removerInicio(&lista);
    removeFinal(&lista);
    removerPosicao(&lista, 2);
    tamanhoLista(lista);

    return 0;
}
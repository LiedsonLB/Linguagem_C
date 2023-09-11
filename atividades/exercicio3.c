#include <stdio.h>

int somaMatriz(int matriz[][3], int linhas, int colunas) {
    int soma = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }

    return soma;
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int linhas = 3;
    int colunas = 3;

    int resultado = somaMatriz(matriz, linhas, colunas);

    printf("A soma dos elementos da matriz é: %d\n", resultado);

    return 0;
}
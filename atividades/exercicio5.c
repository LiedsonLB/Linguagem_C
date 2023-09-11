#include <stdio.h>

void somaDiagonalPrincipal(int matriz[][3], int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += matriz[i][i];
    }

    printf("A soma dos elementos da diagonal principal é: %d\n", soma);
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int tamanho = 3;

    somaDiagonalPrincipal(matriz, tamanho);

    return 0;
}

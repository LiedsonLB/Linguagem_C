#include <stdio.h>

void encontrarMinMax(float matriz[][3], int linhas, int colunas) {
    float menor = matriz[0][0];
    float maior = -matriz[0][0];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("O menor número na matriz é: %.2f\n", menor);
    printf("O maior número na matriz é: %.2f\n", maior);
}

int main() {
    float matriz[3][3] = {
        {1.5, 2.3, 3.7},
        {4.1, 5.2, 6.9},
        {7.3, 8.8, 9.0}
    };

    int linhas = 3;
    int colunas = 3;

    encontrarMinMax(matriz, linhas, colunas);

    return 0;
}
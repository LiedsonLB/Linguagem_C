#include <stdio.h>

int main() {
    int linhas, colunas;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int numero;
    printf("Digite o número pelo qual deseja multiplicar: ");
    scanf("%d", &numero);

    int linha;
    printf("Digite o número da linha a ser multiplicada: ");
    scanf("%d", &linha);
    linha--;

    int coluna;
    printf("Digite o número da coluna a ser multiplicada: ");
    scanf("%d", &coluna);
    coluna--;

    for (int j = 0; j < colunas; j++) {
        matriz[linha][j] *= numero;
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i][coluna] *= numero;
    }

    printf("Matriz modificada:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

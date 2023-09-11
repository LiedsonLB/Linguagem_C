#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    int matriz[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int menorLinha = -1;
    int menorValor = INT_MAX;

    for (int i = 0; i < N; i++) {
        int linhaMenorValor = INT_MAX;
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] < linhaMenorValor) {
                linhaMenorValor = matriz[i][j];
            }
        }
        
        if (linhaMenorValor < menorValor) {
            menorValor = linhaMenorValor;
            menorLinha = i;
        }
    }

    printf("Linha com o menor valor: %d\n", menorLinha + 1);

    return 0;
}

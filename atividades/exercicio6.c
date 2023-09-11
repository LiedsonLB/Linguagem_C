#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int quadrado[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &quadrado[i][j]);
        }
    }

    int soma_diagonal_principal = 0;
    int soma_diagonal_secundaria = 0;

    for (int i = 0; i < N; i++) {
        soma_diagonal_principal += quadrado[i][i];
        soma_diagonal_secundaria += quadrado[i][N - i - 1];
    }

    if (soma_diagonal_principal != soma_diagonal_secundaria) {
        printf("-1\n");
        return 0;
    }

    int soma_linha = 0;
    int soma_coluna = 0;
    int soma_referencia = soma_diagonal_principal;

    for (int i = 0; i < N; i++) {
        soma_linha = 0;
        soma_coluna = 0;

        for (int j = 0; j < N; j++) {
            soma_linha += quadrado[i][j];
            soma_coluna += quadrado[j][i];
        }

        if (soma_linha != soma_referencia || soma_coluna != soma_referencia) {
            printf("-1\n");
            return 0;
        }
    }

    printf("%d\n", soma_referencia);

    return 0;
}

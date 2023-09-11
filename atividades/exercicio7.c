#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int matriz[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int max_peso = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int peso = 0;

            for (int k = 0; k < N; k++) {
                if (k != j) {
                    peso += matriz[i][k];
                }
                if (k != i) {
                    peso += matriz[k][j];
                }
            }

            if (peso > max_peso) {
                max_peso = peso;
            }
        }
    }

    printf("%d\n", max_peso);

    return 0;
}

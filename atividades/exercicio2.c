#include <stdio.h>

void criarMatriz(int N) {
    int matriz[N][N];
    int valor = 1;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = valor;
            valor++;
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    criarMatriz(N);

    return 0;
}



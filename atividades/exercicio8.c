#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int tabuleiro[N + 1][N + 1];

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            scanf("%d", &tabuleiro[i][j]);
        }
    }

    int whiteCount = 0, blackCount = 0;

    for (int i = 1; i < N; i++) {
        for (int j = 1; j < N; j++) {
            if (tabuleiro[i][j] == 0) {
                whiteCount++;
            } else if (tabuleiro[i][j] == 1) {
                blackCount++;
            }
        }
    }

    int finalColor;

    if (tabuleiro[N][N] == 0) {
        finalColor = (blackCount >= whiteCount) ? 1 : 0;
    } else {
        finalColor = (whiteCount >= blackCount) ? 0 : 1;
    }

    printf("%d\n", finalColor);

    return 0;
}

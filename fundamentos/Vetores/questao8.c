#include <stdio.h>

int main() {
    int tamanho, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    printf("Digite os elementos do vetor: ");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    int segundo_maior = vetor[0];

    for (i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            segundo_maior = maior;
            maior = vetor[i];
        } else if (vetor[i] > segundo_maior && vetor[i] < maior) {
            segundo_maior = vetor[i];
        }
    }

    printf("O segundo maior valor do vetor é: %d\n", segundo_maior);

    return 0;
}
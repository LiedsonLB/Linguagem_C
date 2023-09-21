#include <stdio.h>

int contarMaiores(int vetor[], int tamanho, int valor) {
    int contador = 0;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > valor) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int target;
    printf("Digite um valor: ");
    scanf("%d", &target);

    int quantidadeMaiores = contarMaiores(vetor, tamanho, target);

    printf("Quantidade de elementos maiores que %d: %d\n", target, quantidadeMaiores);

    return 0;
}

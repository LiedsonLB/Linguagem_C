#include <stdio.h>

int main() {
    int totalNumeros = 5;
    int soma = 0;
    int numero;

    printf("Digite 5 números:\n");

    for (int i = 0; i < totalNumeros; i++) {
        printf("Número %i: ", i + 1);
        scanf("%i", &numero);
        soma += numero;
    }

    float media = (float)soma / totalNumeros;

    printf("A média aritmética é: %.2f\n", media);

    return 0;
}

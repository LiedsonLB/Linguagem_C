#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &numero);

    if (numero <= 0) {
        printf("Numero invalido. O numero deve ser positivo.\n");
        return 0;
    }

    printf("Tabuada de multiplicacao do numero %i:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%i x %i = %i\n", numero, i, numero * i);
    }

    return 0;
}
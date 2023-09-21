#include <stdio.h>

int calcularSomatorio(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + calcularSomatorio(n - 1);
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%i", &numero);
    int resul = calcularSomatorio(numero);
    printf("O somatório dos números de 1 a %i é %i.\n", numero, resul);
    return 0;
}
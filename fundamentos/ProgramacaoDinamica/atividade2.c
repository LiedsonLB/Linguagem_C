#include <stdio.h>

int contarDigitos(int numero) {
    if (numero == 0) {
        return 0;
    } else {
        return 1 + contarDigitos(numero / 10);
    }
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);
    int resul = contarDigitos(numero);
    printf("O numero de digitos em %i eh %i.\n", numero, resul);
    return 0;
}
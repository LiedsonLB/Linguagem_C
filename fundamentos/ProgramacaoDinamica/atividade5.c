#include <stdio.h>

int somatorioImpares(int n) {
    if (n == 1) {
        return 1;
    } else {
        if (n % 2 != 0) {
            return n + somatorioImpares(n - 2);
        } else {
            return somatorioImpares(n - 1);
        }
    }
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    int resul = somatorioImpares(numero);
    printf("O somatorio dos numeros impares de 1 a %d eh %d.\n", numero, resul);
    return 0;
}
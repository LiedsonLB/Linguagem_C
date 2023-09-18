#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void imprimirFibonacci(int n) {
    printf("Sequencia de Fibonacci ate o termo %i:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%i ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite o valor de N: ");
    scanf("%i", &numero);
    imprimirFibonacci(numero);
    return 0;
}
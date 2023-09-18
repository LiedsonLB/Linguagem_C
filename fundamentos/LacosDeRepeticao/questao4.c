#include <stdio.h>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%i", &num);

    printf("Números ímpares de 1 até %i:\n", num);
    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0) {
            printf("%i ", i);
        }
    }
    printf("\n");

    return 0;
}

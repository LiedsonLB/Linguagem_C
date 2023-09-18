#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    printf("A soma dos números pares entre 0 e 10 é: %i\n", soma);

    return 0;
}

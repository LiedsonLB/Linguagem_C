#include <stdio.h>

int main() {
    int count = 0;

    for (int i = 1; i <= 40; i++) {
        if (i % 2 == 0) {
            count++;
        }
    }

    printf("Quantidade de números pares de 0 até 40: %i\n", count);

    return 0;
}
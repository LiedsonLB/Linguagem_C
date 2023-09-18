#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

int main() {
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%i %i", &num1, &num2);
    int resul = mdc(num1, num2);
    printf("O MDC de %i e %i eh %i.\n", num1, num2, resul);
    return 0;
}

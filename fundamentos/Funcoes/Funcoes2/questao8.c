#include <stdio.h>
#include <math.h>

float VAL(float x, int n, float t) {
    float val = 0.0;
    for (int i = 1; i <= n; i++) {
        val += x / pow(1 + t, i);
    }
    return val;
}

int main() {
    float x, t;
    int n;

    printf("Digite o valor x: ");
    scanf("%f", &x);

    printf("Digite o número de anos (n): ");
    scanf("%d", &n);

    printf("Digite a taxa (t): ");
    scanf("%f", &t);

    float val = VAL(x, n, t);

    printf("O Valor Atual Líquido (VAL) é: %.2f\n", val);

    return 0;
}
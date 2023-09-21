#include <stdio.h>

float CalcularMedia(float array[], int target) {
    printf("Digite os %i numeros: \n", target);
    for (int i = 0; i < target; i++) {
        scanf("%f", &array[i]);
    }

    float sum = 0.0;

    for (int i = 0; i < target; i++) {
        sum += array[i];
    }

    return sum / target;
}

int main() {
    int NumNumbers;
    printf("Indique a quantidade de numeros: ");
    scanf("%i", &NumNumbers);

    float numbers[NumNumbers];

    printf("Media: %.2f\n", CalcularMedia(numbers, NumNumbers));

    return 0;
}
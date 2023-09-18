#include <stdio.h>

float converterCelsiusParaFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
};

int main() {
    float temperaturaCelsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaCelsius);

    float temperaturaFahrenheit = converterCelsiusParaFahrenheit(temperaturaCelsius);

    printf("A temperatura em Fahrenheit eh: %.2f\n", temperaturaFahrenheit);

    return 0;
}
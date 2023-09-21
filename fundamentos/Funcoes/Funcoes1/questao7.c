#include <stdio.h>
#include <math.h>

void calcularAreaPerimetro(int tipoFigura) {
    float lado, raio, area, perimetro;

    if (tipoFigura == 1) {
        printf("Digite o raio do circulo: ");
        scanf("%f", &raio);

        area = 3.14 * raio * raio;
        perimetro = 2 * 3.14 * raio;

        printf("Area do circulo: %.2f\n", area);
        printf("Perimetro do circulo: %.2f\n", perimetro);
    } else if (tipoFigura == 2) {
        printf("Digite o comprimento do retangulo: ");
        scanf("%f", &lado);
        printf("Digite a largura do retangulo: ");
        scanf("%f", &raio);

        area = lado * raio;
        perimetro = 2 * (lado + raio);

        printf("Area do retangulo: %.2f\n", area);
        printf("Perimetro do retangulo: %.2f\n", perimetro);
    } else if (tipoFigura == 3) {
        printf("Digite o lado do quadrado: ");
        scanf("%f", &lado);

        area = lado * lado;
        perimetro = 4 * lado;

        printf("Area do quadrado: %.2f\n", area);
        printf("Perimetro do quadrado: %.2f\n", perimetro);
    } else {
        printf("Opcao invalida.\n");
    }
}

int main() {
    int tipoFigura;

    printf("Digite o tipo de figura geometrica (1 - circulo, 2 - retangulo, 3 - quadrado): ");
    scanf("%i", &tipoFigura);

    calcularAreaPerimetro(tipoFigura);

    return 0;
}
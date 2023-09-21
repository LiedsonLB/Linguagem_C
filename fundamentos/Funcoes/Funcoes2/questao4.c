#include <stdio.h>

float maior(float x, float y, float w)
{
    float numero_maior = x;
    
    if (y > numero_maior)
    {
        numero_maior = y;
    }
    if (w > numero_maior)
    {
        numero_maior = w;
    }

    return numero_maior;
}

int main()
{
    float num1, num2, num3;
    printf("Digite 3 numeros e verifique o maior: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("O maior número eh: %.2f", maior(num1, num2, num3));

    return 0;
}

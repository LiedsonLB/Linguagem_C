#include <stdio.h>

int main()
{
    float N1, N2, N3, ME;
    float MA;

    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &N1, &N2, &N3);

    printf("Digite a média dos exercícios: ");
    scanf("%f", &ME);

    MA = (N1 + N2 * 2 + N3 * 3 + ME) / 7;

    printf("Média de Aproveitamento: %.2f\n", MA);

    if (MA >= 9)
    {
        printf("Conceito: A\n");
    }
    else if (MA >= 7.5)
    {
        printf("Conceito: B\n");
    }
    else if (MA >= 6)
    {
        printf("Conceito: C\n");
    }
    else if (MA >= 4)
    {
        printf("Conceito: D\n");
    }
    else
    {
        printf("Conceito: E\n");
    }

    return 0;
}
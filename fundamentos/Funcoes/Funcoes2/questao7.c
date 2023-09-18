#include <stdio.h>
#include <stdbool.h>

bool Quadrado_Numero(int x,int y)
{
    if(x * 2 == y){
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int num, numQuadrado;
    printf("Digite um numero: ");
    scanf("%i", &num);
    printf("Digite seu quadrado: ");
    scanf("%i", &numQuadrado);

    if (Quadrado_Numero(num, numQuadrado))
    {
        printf("%i eh quadrado de %i.\n", numQuadrado, num);
    }
    else
    {
        printf("%i nao eh quadrado de %i.\n", numQuadrado, num);
    }

    return 0;
}
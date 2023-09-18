#include <stdio.h>
#include <stdbool.h>

bool impar(int number)
{
   return number % 2 != 0;
}

int main()
{
    int num;
    printf("Verifique se o numero é impar: ");
    scanf("%i", &num);

    if (impar(num))
    {
        printf("O numero eh impar.\n");
    }
    else
    {
        printf("O numero não eh impar.\n");
    }

    return 0;
}
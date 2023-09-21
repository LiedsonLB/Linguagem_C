#include <stdio.h>
#include <stdbool.h>

bool VerifNum(int x, int y, int value)
{
   for(int i = x; i <= y; i++){
    if(i == value){
        return true;
        break;
    }
   }
   return false;
}

int main()
{
    int num1, num2, num;
    printf("Digite um intevalo de numeros: ");
    scanf("%i %i", &num1, &num2);
    printf("Digite um numero a ser procurado: ");
    scanf("%i", &num);

    if (VerifNum(num1, num2, num))
    {
        printf("O numero foi encontrado\n");
    }
    else
    {
        printf("O numero não foi encontrado\n");
    }

    return 0;
}
#include <stdio.h>

int absoluto(int num)
{
    if(num < 0){
        return -num;
    } else {
        return num;
    }
}

int main()
{
    int number;
    printf("Digite um numero e veja seu valor absoluto: ");
    scanf("%i", &number);

    printf("O valor absoluto de %i número eh: %i",number ,absoluto(number));

    return 0;
}
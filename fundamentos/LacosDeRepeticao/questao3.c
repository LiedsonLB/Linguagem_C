#include <stdio.h>

int sum(){
    int sum = 0;
    for(int i = 1; i <= 10; i++){
        sum+=i;
    }
    return sum;
}

int main()
{
    printf("A soma dos números de 1 até 10 é: %i\n", sum());
    return 0;
}
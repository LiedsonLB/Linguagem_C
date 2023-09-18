#include <stdio.h>

int trocarValores(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
};

int main(){
    int num1, num2;
    printf("Digite dois numeros e veja a troca de seus valores: ");
    scanf("%i %i", &num1, &num2);

    printf("Valores antes da troca: x = %i e y = %i\n", num1, num2);

    trocarValores(&num1, &num2);

    printf("Valores depois da troca: x = %i e y = %i\n", num1, num2);

    return 0;
}
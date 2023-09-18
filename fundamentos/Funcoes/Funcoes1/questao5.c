#include <stdio.h>

int Fatorial(int number){
    int sum = 1;
    for(int i = 1; i <= number; i++){
        sum *= i;
    }
    return sum;
};

int main(){
    int num;
    printf("Digite um numero e veja seu fatorial: ");
    scanf("%i", &num);

    printf("O fatorial de %i eh igual a %i", num, Fatorial(num));

    return 0;
}
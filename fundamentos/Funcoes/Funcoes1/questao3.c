#include <stdio.h>
#include <stdbool.h>

bool verificarPrimo(int number) {
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            return false;
            break;
        }
    }
    return true;
}

int main() {
    int num;
    printf("Digite um numero e verifique se eh primo: ");
    scanf("%i", &num);

    if(verificarPrimo(num)){
        printf("O numero eh primo");
    } else {
        printf("O numero NAO eh primo");
    }

    return 0;
}
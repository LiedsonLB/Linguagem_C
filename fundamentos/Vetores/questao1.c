#include <stdio.h>
#include <stdbool.h>

bool verificarElemento(int numbers[], int size, int number) {
    for(int i = 0; i < size; i++){
        if(numbers[i] == number){
            return true;
        }
    }
    return false;
}

int main() {
    int target;
    int vetor[] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Informe o numero procurado: ");
    scanf("%i", &target);

    if (verificarElemento(vetor, tamanho, target)) {
        printf("O elemento %d esta presente no vetor.\n", target);
    } else {
        printf("O elemento %d nao esta presente no vetor.\n", target);
    }

    return 0;
}
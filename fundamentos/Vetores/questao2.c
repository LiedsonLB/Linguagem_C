#include <stdio.h>
#include <stdbool.h>

bool verificarVetorOrdenado(int numbers[], int size) {
    for(int i = 0; i < size - 1; i++){
        if(numbers[i] > numbers[i + 1]){
            return false;
            break;
        }
    }
    return true;
}

int main() {

    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tamanho);

    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++){
        int num;
        printf("Digite o %i numero do vetor: ", i + 1);
        scanf("%i", &num);

        vetor[i] = num;
    }

    if(verificarVetorOrdenado(vetor, tamanho)){
        printf("O vetor esta em ordem crescente");
    } else {
        printf("O vetor NAO esta em ordem crescente");
    }

    return 0;
}

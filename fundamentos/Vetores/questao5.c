#include <stdio.h>

int SumPair(int numbers[], int size, int *resul){
    *resul = 0;
    for(int i = 1; i <= size; i++){
        if(i % 2 == 0){
            *resul += numbers[i];
        }
    }
    return *resul;
};

int main(){

    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tamanho);

    int vetor[tamanho];

    for (int i = 1; i <= tamanho; i++)
    {
        scanf("%i", &vetor[i]);
    }

    int sum = 0;

    SumPair(vetor, tamanho, &sum);

    printf("A soma dos numeros pares eh: %i", sum);

    return 0;
}
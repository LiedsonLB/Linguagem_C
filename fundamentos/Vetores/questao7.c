#include <stdio.h>

void DivisionArray(int arrNumbers[], int impares[], int pares[], int size){
    int pair = 0, impair = 0;
    for(int i = 0; i < size; i++){
        if(arrNumbers[i] % 2 == 0){
            pares[pair] = arrNumbers[i];
            pair++;
        } else {
            impares[impair] = arrNumbers[i];
            impair++;
        }
    }

    printf("Numeros Pares:");
    for(int i = 0; i < pair; i++){
        printf(" %i", pares[i]);
    }

    printf("\n");

    printf("Numeros Impares:");
    for(int i = 0; i < impair; i++){
        printf(" %i", impares[i]);
    } 
};

int main(){

    int N;
    printf("Informe a quantidade de numeros do array: ");
    scanf("%i", &N);

    int arrNumbers[N], arrImpar[N], arrPar[N];

    for(int i = 0; i < N; i++){
        scanf("%i", &arrNumbers[i]);
    }

    DivisionArray(arrNumbers, arrImpar, arrPar, N);

    return 0;
}
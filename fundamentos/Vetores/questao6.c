#include <stdio.h>
#include <stdbool.h>

bool VerificArrays(int vetor1[], int vetor2[], int size){
    for(int i = 0; i < size; i++){
        if(vetor1[i] != vetor2[i]){
            return false;
        }
    }
    return true;
}

int main(){

    int arr1[10] = {1,2,3,4,5,6,7,8,9,10}, arr2[10] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho = sizeof(arr1) / sizeof(arr1[0]);

    if(VerificArrays(arr1, arr2, tamanho)){
        printf("Os arrays sao iguais!");
    } else{
        printf("Os arrays sao diferentes!");
    }
    return 0;
}
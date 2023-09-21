#include <stdio.h>
#include <stdbool.h>

void SumVector(int numbers1[], int numbers2[] , int size, int resul[]) {
    for(int i = 0; i < size; i++){
        resul[i] = numbers1[i] + numbers2[i];
    }
}

int main() {

    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tamanho);

    int vector1[tamanho], vector2[tamanho], ans[tamanho];

    printf("Digite os %i elementos do primeiro vetor: \n", tamanho);
    for(int i = 0; i < tamanho; i++){
        int num;
        scanf("%i", &num);
        vector1[i] = num;
    }

    printf("Digite os %i elementos do segundo vetor: \n", tamanho);
    for(int i = 0; i < tamanho; i++){
        int num;
        scanf("%i", &num);
        vector2[i] = num;
    }

    SumVector(vector1, vector2, tamanho, ans);

    printf("A soma dos vetores tem como resultado: [");
    for(int i = 0; i < tamanho; i++){
        printf("%i ", ans[i]);
    }
    printf("]");

    return 0;
}

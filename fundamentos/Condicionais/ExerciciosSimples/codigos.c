//Verificando se a idade é de maior ou não

#include <stdio.h>
int main() {
    int idade;
    int leituras;
    do {
        printf("Digite sua idade: ");
        leituras = scanf("%i", &idade);
        if (leituras < 1) {
            printf("Idade inválida. Digite novamente.\n");
            // Limpa o buffer de entrada para evitar loops infinitos
            while (getchar() != '\n');
        }
    } while (leituras < 1);
    if(idade >= 18) {
        printf("Entrada Permitida!!");
    }
    else {
        printf("Você é menor de idade!!");
    }
    
    return 0;
}

//verificando a média de 3 notas

#include <stdio.h>
float media(float nota1, float nota2, float nota3) {
    float media_numbers;
    media_numbers = (nota1 + nota2 + nota3)/3;
    return media_numbers;
}

int main(){
    float nota1, nota2, nota3;
    printf("Digite as 3 notas das provas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    float media_aluno = media(nota1, nota2, nota3);
    if(media_aluno >= 7) {
        printf("A média do aluno foi %.2f e está APROVADO", media_aluno);
    } else {
        printf("A média do aluno foi %.2f e está REPROVADO", media_aluno);
    }
}

// verificando se um numero é primo ou não

#include <stdio.h>
#include <math.h>

int func_primo(int num) {
    if(num <= 1) {
        return 0;
    }
    for (int i = 2; i < sqrt(num); i++) {
        if(num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int num;
    printf("Digite um numero e verifique se ele é primo: ");
    scanf("%i", &num);
    int verif_num = func_primo(num);
    if(verif_num) {
        printf("%i é um numero primo", num);
    } else {
        printf("%i nao e um numero primo", num);
    }
}

// Programa usando função que retorna se o numero é positivo, negativo ou zero

#include <stdio.h>

void func_num(int num) {
    if(num >= 1) {
        printf("o numero é POSITIVO");
    }
    if((num < 1) && (num != 0)) {
        printf("o numero é NEGATIVO");
    }
    if(num == 0) {
        printf("o numero é ZERO");
    }
}

int main() {
    int num;
    printf("digite um numero e verifique: ");
    scanf("%i", &num);
    func_num(num);
    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char nome1[100];
    char nome2[100];

    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);

    printf("Digite o segundo nome: ");
    scanf("%s", nome2);

    int comparacao = strcmp(nome1, nome2);

    if (comparacao < 0) {
        printf("%s\n%s\n", nome1, nome2);
    } else if (comparacao > 0) {
        printf("%s\n%s\n", nome2, nome1);
    } else {
        printf("Os nomes são iguais.\n");
    }

    return 0;
}
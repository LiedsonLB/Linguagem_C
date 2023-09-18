#include <stdio.h>

void quant_equivalente(int n_horas, char tipo, int *horas, int *minutos, int *segundos) {
    if (tipo == 'h') {
        *horas = n_horas;
        *minutos = n_horas * 60;
        *segundos = n_horas * 3600;
    } else if (tipo == 'm') {
        *horas = n_horas / 60;
        *minutos = n_horas;
        *segundos = n_horas * 60;
    } else if (tipo == 's') {
        *horas = n_horas / 3600;
        *minutos = (n_horas % 3600) / 60;
        *segundos = n_horas;
    } else {
        printf("Tipo inválido.\n");
        *horas = 0;
        *minutos = 0;
        *segundos = 0;
    }
}

int main() {
    int n_horas, horas, minutos, segundos;
    char tipo;

    printf("Digite a quantidade: ");
    scanf("%d", &n_horas);

    printf("Digite o tipo (h, m ou s): ");
    scanf(" %c", &tipo);

    quant_equivalente(n_horas, tipo, &horas, &minutos, &segundos);

    printf("Equivalente: %d horas, %d minutos, %d segundos\n", horas, minutos, segundos);

    return 0;
}
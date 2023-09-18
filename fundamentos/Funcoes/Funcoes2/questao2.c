#include <stdio.h>
typedef long int ll;

ll n_segundos(int horas) {
  return horas * 3600;
}

int main() {
  int horas;
  printf("Digite o numero de horas: ");
  scanf("%d", &horas);
  printf("O numero de segundos eh: %ld\n", n_segundos(horas));
  return 0;
}
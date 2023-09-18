#include <stdio.h>

int main() {
  
  float vetor[4] = {2.5, 7.0, 3.5, 9.0};
  float soma = 0.0;
  for (int i = 0; i < 4; i++) {
      soma += vetor[i];
  }
  float media = soma / 4.0;
  printf("A média dos valores no vetor é %.2f\n", media);

  
  return 0;
}
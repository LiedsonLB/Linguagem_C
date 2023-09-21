#include <stdio.h>

int main()
{
  printf("A: A condição i < i nunca sera verdadeira, pois a variável i eh inicializada como 0 e nunca eh modificada dentro do loop\n");
  printf("B: O loop se tornara infinito pois sempre sera decrementada o valor de i assim nunca atingira o maximo da condicao e sair do loop\n");
  
  return 0;
}
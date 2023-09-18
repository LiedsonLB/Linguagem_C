#include <stdio.h>

int main() {
  int num = 2;

  switch(num) {
    case 1:
      printf("O número é 1");
      break;
    case 2:
      printf("O número é 2");
      break;
    case 3:
      printf("O número é 3");
      break;
    default:
      printf("O número não é 1, 2 ou 3");
  }
  
  return 0;
}

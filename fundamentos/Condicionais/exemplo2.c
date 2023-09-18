#include <stdio.h>

int main() {
  int n;
  n = 1;

  while(n <= 10){
    printf("5 x %i = %i\n", n, n * 5);
    n++;
  }
  
  return 0;
}
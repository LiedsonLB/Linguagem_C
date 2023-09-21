#include <stdio.h>

int main() {
  char letter;
  printf("Confira para ver se a letra eh uma vogal: ");
  scanf("%c", &letter);

  switch(letter) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("A letra eh uma vogal");
      break;
    default:
      printf("A letra eh uma consoante");
  }
  
  return 0;
}
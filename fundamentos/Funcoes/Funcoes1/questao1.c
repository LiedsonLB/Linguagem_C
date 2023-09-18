#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contadorConsoante(char* frase){
    int contador = 0;
    for(int i = 0; i < strlen(frase); i++){
        if(isalpha(tolower(frase[i])) && !strchr("aeiou", frase[i])){
            contador++;
        }
    }

    return contador;
};

int main(){
    char frase[100];
    scanf("%99[^\n]", frase);

    printf("%i", contadorConsoante(frase));
    return 0;
}
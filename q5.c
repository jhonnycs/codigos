#include <stdio.h>
#include <string.h>

/*
    Inverter uma string
*/

#define TAMANHO_STRING 100

int main() {
    char string[TAMANHO_STRING];

    printf("Digite a string (máximo de %d caracteres):\n> ", TAMANHO_STRING - 1);
    scanf("%s", string);

    int tamanhoString = strlen(string);

    for (int i = 0; i < tamanhoString / 2; i++) {
        char c = string[i];
        string[i] = string[tamanhoString - i - 1];
        string[tamanhoString - i - 1] = c;
    }
    
    printf("A palavra invertida é: %s", string);

    return 0;
}
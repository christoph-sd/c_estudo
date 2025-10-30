#include <stdio.h>
#include <string.h>
    // Contar o comprimento de uma palavra
    int main() {

        char nomeString[60];
        int comprimentoPalavra;

        printf("Digite o nome da palavra: \n");
        fgets(nomeString, sizeof(nomeString), stdin);

        comprimentoPalavra = strlen(nomeString);
        printf("A quantidade de caracteres da palavra é: %i\n", comprimentoPalavra);
    }
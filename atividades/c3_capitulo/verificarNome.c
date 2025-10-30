#include <stdio.h>
#include <string.h>
#include <stdbool.h>

    int main() {

        char nome[50];

        printf("Digite o nome: \n");
        fgets(nome, sizeof(nome), stdin);
        // Puxa o primeiro char da palavra
        printf("A sua primeira letra é %c\n",nome[0]); // String => array de caracteres (chamando o primeiro índice)

        return 0;
    }
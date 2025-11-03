#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
    void caracterCondicao(char verificaChar) {
    
    if (isalpha(verificaChar)) {
        printf("É uma letra. \n");
    } else if (isdigit(verificaChar)) {
        printf("É um dígito. \n");
    } else {
        printf("É um caractere especial\n");
    }
}

    void verificadorCaracter(int qtd) {
        char caracter;
        int i;
        printf("%d verificações a serem feitas.\n", qtd);
    for (i = 0; i < qtd; i++) {
        printf("Digite o caractere para ser verificado: \n");
        scanf(" %c", &caracter);

    caracterCondicao(caracter);
    }

}

    int main() {
        int quantidade;
        setlocale(LC_ALL, "pt_BR.UTF-8");
        printf("=== CLASSIFICADOR DE CARACTERES ===\n");
        printf("Digite a quantidade de caracteres para verificar: \n");
        scanf("%i", &quantidade);
    
        verificadorCaracter(quantidade);
    
    return 0;
}
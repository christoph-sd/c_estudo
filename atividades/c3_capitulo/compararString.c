#include <stdio.h>
#include <string.h>

    int main() {
        char palavra[50];
        char compararPalavra[50];
        int comparacao; // inteiro se comportando como bool 

        printf("Digite o nome de uma palavra: \n");
        scanf("%s", &palavra);

        printf("Digite o nome da segunda palavra para comparar: \n");
        scanf("%s", &compararPalavra);

        comparacao = strcmp(palavra, compararPalavra);
        // int: 4bytes | Assume qualquer número | Pode assumir outros valores(perigo) | 0 => false, != 0 => true;
        // Bool: 1byte | Assume 1 ou 0 | Pode assumir outros valores(não ideal) | false = 0, true = 1;
        // Tipo assumido como int
        if (comparacao == 1) {
            printf("As palavras são iguais\n");
        } else {
            printf("As palavras não são iguais.\n");
        }


    }
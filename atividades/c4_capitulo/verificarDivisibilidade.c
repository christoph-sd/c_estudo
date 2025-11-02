#include <stdio.h>
#include <stdbool.h>

    int main() {

        int numero;

        printf("=== VERIFICADOR DE DIVISIBILIDADE ===\n");
        printf("Digite um número inteiro: \n");
        scanf("%i", &numero);

        if (numero % 5 == 0 && numero % 11 == 0) {
            printf("O número %i é divisível por 5 e 11.\n", numero);
        } else if (numero % 5 == 0 && numero % 11 != 0) {
            printf("O número %i é divisível por 5, mas não por 11.\n", numero);
        } else if(numero % 5 != 0 && numero % 11 == 0) {
            printf("O número %i não é divisível por 5 e é por 11.\n", numero);
        } else if(numero % 5 != 0 && numero % 11 != 0) {
            printf("O número %i não é divisível por nenhum número\n");
        } else {
            printf("Operação inválida.\n");
        }

        return 0;
    }



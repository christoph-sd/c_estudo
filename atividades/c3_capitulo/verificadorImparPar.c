#include <stdio.h> 
#include <stdbool.h>

    int main() {
        int numero;
        bool verdadeiroPar;

        printf("Digite um número para verificar se é par ou ímpar: \n");
        scanf("%i", &numero);

        // Calculo se é par
        verdadeiroPar = (numero % 2 == 0);
        // int: 4bytes | Assume qualquer número | Pode assumir outros valores(perigo) | 0 => false, != 0 => true;
        // Bool: 1byte | Assume 1 ou 0 | Pode assumir outros valores(não ideal) | false = 0, true = 1;
        // Tipo assumido como bool
        if(verdadeiroPar == true) {
            printf("O número %i é um par.\n", numero);
        } else {
            printf("O número é ímpar.\n");
        }



        return 0;
    }
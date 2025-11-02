#include <stdio.h>
#include <stdbool.h>

int main() {

    float numero;

    printf("=== VERIFICADOR DE NÚMERO ===\n");
    printf("Digite um número: \n");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("%.2f é um número positivo.\n", numero);
    } else if (numero < 0) {
        printf("%.2f é um número negativo.\n", numero);
    } else {
        printf("O número é zero.\n");
    }


    return 0;
}
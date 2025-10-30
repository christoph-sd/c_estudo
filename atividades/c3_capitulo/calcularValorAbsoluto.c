#include <stdio.h>
#include <math.h>

// Calcular valor absoluto
    int main() {
        
        float numero;
        printf("Digite um número para converter ao módulo: \n");
        scanf("%f", &numero);

        printf("O valor absoluto do número %.2f é %.2f\n", numero, fabs(numero));

        return 0;
    }
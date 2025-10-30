#include <stdio.h>
#include <math.h>

// Peça ao usuário um número e mostre sua raiz quadrada.
int main() {
    float numeroRaiz;
    
    printf("Digite um número: \n");
    scanf("%f", &numeroRaiz);
    printf("A raíz é %.2f\n", sqrt(numeroRaiz));
    
    return 0;
}
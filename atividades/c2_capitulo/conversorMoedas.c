#include <stdio.h>

int main() {

    const float conversorUSD = 5.50;
    const float conversorEU = 6.0;
    float valorREAL;
    float convertidoUSDReal;
    float convertidoEUReal;

    printf("Digite o valor em reais: ");
    scanf("%f", &valorREAL);

    convertidoUSDReal = valorREAL / conversorUSD;
    convertidoEUReal = valorREAL / conversorEU;
    printf("[Cotação em USD:] %.2f dólares | [Cotação em EU:] %.2f euros. \n", convertidoUSDReal, convertidoEUReal);

    return 0;
}


#include <stdio.h>
#include <math.h>

    int main() {
        double base;
        double expoente;

        printf("[Calcular potência] Digite a base: \n");
        scanf("%lf", &base);

        printf("[Calcular potência] Digite o expoente: \n");
        scanf("%lf", &expoente);

        printf("A potência é igual a %.2f", pow(base, expoente));

        return 0;
    }
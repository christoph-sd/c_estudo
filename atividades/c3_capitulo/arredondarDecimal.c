#include <stdio.h>
#include <math.h>

    int main() {

        double numeroDecimal;

        printf("Digite seu número decimal: \n");
        scanf("%lf", &numeroDecimal);

        printf("O número arredondado é %lf", round(numeroDecimal));

        return 0;
    }
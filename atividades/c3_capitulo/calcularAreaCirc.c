#include <stdio.h>
#include <math.h>

 int main() {
    
    double raio;
    double area;
    const double pi = 3.14159;

    printf("Digite seu raio em centrímetros: \n");
    scanf("%lf", &raio);

    area = pi * pow(raio, 2);
    printf("Área do círculo: %.6lf\n", area);

    return 0;
 }
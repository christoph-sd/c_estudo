// Converta 25°C para Fahrenheit usando a fórmula: F = C × 9/5 + 32
// Exiba o resultado formatado

#include <stdio.h>

int main() {
    int celsius = 25;
    float fahrenheit;

    fahrenheit = celsius * 9.0 / 5 + 32;
    printf("A sua temperatura é %d°C, que equivale a %.2f°F.\n", celsius, fahrenheit);

    return 0;
}
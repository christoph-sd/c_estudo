#include <stdio.h>
#include <math.h>
#include <locale.h> // Adiciona o caracter especial

int main() {
    const float piConstante = 3.14159;
    float raio;
    float area;
    float perimetro;
    
    printf("[CALCULADORA DE CÍRCULO] Digite o raio do círculo, em metros: \n");
    scanf("%f", &raio);
    area = pow(raio, 2) * piConstante;
    perimetro = 2 * piConstante * raio;
    
    printf("A área do círculo é %.2f m² e o perímetro é %.2f m\n", area, perimetro);
}
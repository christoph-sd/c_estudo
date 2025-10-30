#include <stdio.h>
#include <math.h>

int main() {
    float nota1;
    float nota2;
    float media;

    printf("Digite a sua primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("A sua média simples é %.2f: \n", media);

    return 0;
}
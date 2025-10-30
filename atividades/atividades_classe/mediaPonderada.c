#include <stdio.h>
#include <math.h>

int main() {
    float p1;
    float p2;
    float t1;
    float media;
    
    
    printf("Digite sua primeira nota: \n");
    scanf("%f", &p1);

    printf("Digite sua segunda nota: \n");
    scanf("%f", &p2);

    printf("Digite a nota do seu trabalho: \n");
    scanf("%f", &t1);

    media = ((p1 * 4) + (p2 * 4) + (t1 * 2)) /(4+4+2);

    printf("A sua média ponderada é: %.2f\n", media);

    return 0;

}
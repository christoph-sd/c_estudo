#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media;

    printf("Digite a sua primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a sua segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite a sua terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("[Média Final] = %.2f | A sua primeira nota: %.2f | Segunda nota: %.2f | Terceira nota: %.2f", media, nota1, nota2, nota3);

    
    return 0;
}
#include <stdio.h>

int main(){

    float media;

    printf("Digite a média para verificar: ");
    scanf("%f", &media);

    if (media > 0) {
        printf("A sua média é: %.2f\n", media);
     if (media > 10) {
        printf("A nota é inválida\n");
    } else if (media >= 7) {
        printf("Aprovado\n");
    } else if (media < 7) {
        printf("Em recuperação\n");
    } else {
        printf("Reprovado!\n");
    }
}

    return 0;
}
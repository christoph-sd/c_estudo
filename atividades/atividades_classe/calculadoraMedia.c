#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int mediaCalcular;
    float nota1, nota2, nota3;
    float media = -1;

    printf("=== Calculadora Acadêmica ===\n");
    printf("1. Calcular Média Simples (2 notas)\n");
    printf("2. Calcular Média Ponderada (3 notas)\n");
    printf("Escolha uma opção: ");
    scanf("%i", &mediaCalcular);

    switch (mediaCalcular)
    {
    case 1:
        printf("Digite sua primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite sua segunda nota: ");
        scanf("%f", &nota2);
        media = (nota1 + nota2) / 2;
        break;

    case 2:
        printf("Digite sua primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite sua segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite sua terceira nota: ");
        scanf("%f", &nota3);
        media = ((nota1 * 4) + (nota2 * 4) + (nota3 * 2)) / 10;
        break;

    default:
        printf("Opção inválida.\n");
    }
    // Verificar situacao media
    if (media >= 0) { 
        printf("A sua média é: %.2f\n", media);
        if (media > 10) {
            printf("Nota inválida.\n");
        }
        else if (media >= 7) {
            printf("Aprovado!\n");
        }
        else if (media >= 4) {
            printf("Em recuperação.\n");
        } else {
            printf("Reprovado.\n");
        }
    }

    return 0;
}

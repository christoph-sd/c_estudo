#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    char letra[3];

    printf("=== VERIFICADOR DE ALFABETO ===\n");
    printf("Digite um caráter: \n");
    fgets(letra, sizeof(letra), stdin);

    if (isalpha(letra[0]) != 0) // == 0 FALSO vs != 0 VERDADEIRO isalpha(letra[0])) -> é válido e clean (VERDADEIRO)
    {
        printf("✓ A letra é do alfabeto.\n");

        if (isupper(letra[0]) != 0)
        {
            printf("✓ A letra %c é maiúscula.\n", letra[0]);
        }
        else
        {
            printf("✓A letra %c não é maiúscula.\n", letra[0]);
        }
    } else {
        printf("O caráter %c não pertence ao alfabeto.\n", letra[0]);
    }

    return 0;
}


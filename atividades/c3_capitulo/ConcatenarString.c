#include <stdio.h>
#include <string.h>

    int main() {
        char primeiraString[50];
        char segundaString[50];

        printf("Digite sua primeira string: \n");
        fgets(primeiraString, sizeof(primeiraString), stdin);

        printf("Digite sua segunda string: \n");
        fgets(segundaString, sizeof(segundaString), stdin);

        primeiraString[strcspn(primeiraString, "\n")] = 0;
        segundaString[strcspn(segundaString, "\n")] = 0;

        strcat(primeiraString, " ");
        strcat(primeiraString, segundaString);

        printf("%s", primeiraString);        

        return 0;
    }
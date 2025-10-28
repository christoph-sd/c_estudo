#include <stdio.h>
#include <string.h>

int main() {
    char nomeLivro[60];
    int diasAtraso;
    float valorMultaDia;
    float totalMulta;


    printf("Escreva o nome do livro: \n");
    fgets(nomeLivro, sizeof(nomeLivro), stdin);
    printf("Agora digite os dias de atraso: \n");
    scanf("%i", &diasAtraso);
    printf("Digite o valor da multa por dia: \n");
    scanf("%f", &valorMultaDia);

    if (strcmp(nomeLivro, "") == 0)  {
        printf("Não é possível deixar o nome vazio.");
        return 1;
    }

    totalMulta = diasAtraso * valorMultaDia;
    printf("O seu livro %s | Possui R$ %.2f de multa para ser paga | Dias atrasados: %i | Multa por dia: %.2f reais \n", nomeLivro, totalMulta, diasAtraso, valorMultaDia);

    return 0;
}
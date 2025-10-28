// Peça ao usuário seu ano de nascimento
// Calcule e mostre quantos anos ele terá em 2030

#include <stdio.h>
int main() {
    int ano_nascimento;
    int idade_em_2030;

    // Peça ao usuário seu ano de nascimento
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    idade_em_2030 = 2030 - ano_nascimento;

    // Mostre a idade em 2030
    printf("Em 2030, você terá %d anos.\n", idade_em_2030);

    return 0;
}
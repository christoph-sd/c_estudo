#include <stdio.h>

int main() {
    // Problema 1: O Saldo Inicial
    float saldoAtual = 1000.00;
    float valorSaque;
    printf("=== CAIXA ELETRÔNICO ===\n");
    printf("Seu saldo é de R$ %.2f\n", saldoAtual);
    // Problema 2: Operação de Saque
    printf("Digite um valor para sacar:\n");
    scanf("%f",&valorSaque);

    if (saldoAtual >= valorSaque && valorSaque >= 20) {
        saldoAtual -= valorSaque;
    } else if (saldoAtual < valorSaque) {
        printf("Saldo insuficiente.\n");
    } else if (valorSaque < 20) {
        printf("O valor mínimo de saque é de 20 reais.\n");
    } else {
        printf("Operação inválida.\n");
    }
    printf("%.2f", saldoAtual);

    return 0;
}


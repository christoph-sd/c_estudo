#include <stdio.h>

// Problema 4: Refatorando com Funções 
float realizarSaque(float saldoAtual, float valorSaque) {
    if (saldoAtual >= valorSaque && valorSaque >= 20) {
        saldoAtual -= valorSaque;
    } else if (saldoAtual < valorSaque) {
        printf("Saldo insuficiente.\n");
    } else if (valorSaque < 20) {
        printf("O valor mínimo de saque é de 20 reais.\n");
    } else {
        printf("Operação inválida.\n");
    }
    
    return saldoAtual;
}

float realizarDeposito(float saldoAtual,float valorDeposito) {
    if(valorDeposito < 2000 && valorDeposito > 0) {
        saldoAtual += valorDeposito;
    } else {
        printf("Operação inválida.\n");
    }
    return saldoAtual;
}

void exibitSaldo(float saldoAtual) {
    printf("Novo saldo: R$ %.2f", saldoAtual);

}



int main() {
    // Problema 1: O Saldo Inicial
    float saldoAtual = 1000.00;
    float valorSaque;
    float valorDeposito;
    printf("=== CAIXA ELETRÔNICO ===\n");
    printf("Seu saldo é de R$ %.2f\n", saldoAtual);
    // Problema 2: Operação de Saque
    printf("Digite um valor para sacar:\n");
    scanf("%f",&valorSaque);

    saldoAtual = realizarSaque(saldoAtual, valorSaque);
    exibitSaldo(saldoAtual);

    // Problema 3: Operação de Depósito
    printf("Digite um valor para depositar:\n");
    scanf("%f", &valorDeposito);

    saldoAtual = realizarDeposito(saldoAtual, valorDeposito);
    exibitSaldo(saldoAtual);



    return 0;
}
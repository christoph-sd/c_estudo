#include <stdio.h>

void exibirMenu(void) {
    printf("=== CAIXA ELETRÔNICO ===\n");
    printf("1. Ver Saldo\n");
    printf("2. Realizar Saque\n");
    printf("3. Realizar Depósito\n");
    printf("4. Sair\n");
    printf("Escolha uma opção: \n");
    printf("\n");
}

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

int exibirSaldo(float saldoAtual) {
    int continuar = -1;
    printf("Saldo atual: R$ %.2f\n", saldoAtual);
    printf("\n");
    while (continuar != 1) {
        printf("Deseja continuar?: \n");
        printf("1. Sim \n");
        printf("0. Não \n");
        scanf("%i", &continuar);
        if (continuar == 1) {
           return 1;
        } else if (continuar == 0){            
            return 0;
        }
    }
}
int main() {

    float saldoAtual = 1000.00;
    float valorSaque;
    float valorDeposito;
    int opcaoMenu = -1;
    
    
    // Problema 5: Exibir menu
    while(opcaoMenu != 4) {
    exibirMenu();
    
    // Problema 5: Switch
    // Entrar no switch
    scanf("%i", &opcaoMenu);
    switch (opcaoMenu)
    {
    case 1:
    if (exibirSaldo(saldoAtual) == 0) {
    opcaoMenu = 4;
    }
        break;
    case 2:
    printf("Digite um valor para sacar:\n");
    scanf("%f",&valorSaque);
    saldoAtual = realizarSaque(saldoAtual, valorSaque);
        break;
    case 3:
    printf("Digite um valor para depositar:\n");
    scanf("%f", &valorDeposito);
    saldoAtual = realizarDeposito(saldoAtual, valorDeposito);
    exibirSaldo(saldoAtual);
    
        break;
    case 4:
    printf("Deslogado com sucesso.\n");
    default:
        break;
    }

}
    return 0;
}
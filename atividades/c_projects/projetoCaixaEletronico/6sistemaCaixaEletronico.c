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
    char confirmar;
    if (saldoAtual >= valorSaque && valorSaque >= 20) {

        // Confirmar operacao critica (problema 6)
        printf("Deseja confirmar saque de %.2f? (s/n):\n", valorSaque);
        while (getchar() != '\n');
        scanf("%c", &confirmar);
        if (confirmar == 's') {
            return saldoAtual -= valorSaque;
        } if (confirmar == 'n') {
            printf("Operação cancelada.\n");
            return saldoAtual;
        }


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
        // Problema 6 (verificação Menu)
    

        // Verificar Texto no input do menu (problema 6)
        int verificacaoMenu = scanf("%i", &opcaoMenu);
        if (verificacaoMenu != 1) {
        while ((getchar()) != '\n');
        printf("Valor inválido! Digite de 1-4.\n");
        continue;
        } else if (verificacaoMenu == 1 ) {
            if (opcaoMenu < 1 || opcaoMenu > 4) {
        printf("Valor inválido! Digite de 1-4.\n");
        continue;
            }
        }

    switch (opcaoMenu)
    {
    case 1:
    if (exibirSaldo(saldoAtual) == 0) {
    opcaoMenu = 4;
    }
        break;
    case 2:
    printf("Digite um valor para sacar:\n");
    // Verificar Texto no input do menu (problema 6)
    int verificacaoSaque = scanf("%f",&valorSaque);
    if (verificacaoSaque != 1) {
        while ((getchar()) != '\n');
        printf("Valor inválido! Digite um número.\n");
        continue;
    }  else {
        saldoAtual = realizarSaque(saldoAtual, valorSaque);
        break;
    }

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
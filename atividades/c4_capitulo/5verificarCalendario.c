#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

bool verificarBissexto(int ano) {
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        return true;
    } else {
        return false;
    }
}

int diasNoMes(int mes, int ano) {
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (verificarBissexto(ano)) {
                return 29;
            } else {
                return 28;
            }
        default:
            return -1;
    }
}

void exibirMeses(int mes) {
    switch (mes) {
        case 1: printf("O mês é janeiro\n"); break;
        case 2: printf("O mês é fevereiro\n"); break;
        case 3: printf("O mês é março\n"); break;
        case 4: printf("O mês é abril\n"); break;
        case 5: printf("O mês é maio\n"); break;
        case 6: printf("O mês é junho\n"); break;
        case 7: printf("O mês é julho\n"); break;
        case 8: printf("O mês é agosto\n"); break;
        case 9: printf("O mês é setembro\n"); break;
        case 10: printf("O mês é outubro\n"); break;
        case 11: printf("O mês é novembro\n"); break;
        case 12: printf("O mês é dezembro\n"); break;
        default: printf("Mês inválido!\n"); break;
    }
}

void verificarMes(int mes, int ano) {
    if (mes < 1 || mes > 12) {
        printf("Operação inválida: O mês deve estar entre 1 e 12.\n");
        return;
    }
    
    exibirMeses(mes);
    
    int dias = diasNoMes(mes, ano);
    printf("Este mês tem %d dias\n", dias);
    
    if (verificarBissexto(ano)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int mes, ano;
    
    printf("=== CALENDÁRIO - DIAS NO MÊS ===\n");
    printf("Digite o mês (1-12): ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    verificarMes(mes, ano);
    
    return 0;
}
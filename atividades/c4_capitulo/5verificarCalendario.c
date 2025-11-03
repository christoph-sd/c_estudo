#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <locale.h>

    void verificarBissexto(int ano) {
        if (ano % 400 == 0) {
            printf("O ano %i é bissexto e centenário.\n", ano);
        } else if (ano % 100 == 0) {
            printf("O ano %i é centenário \n");
        } else if (ano % 4 == 0) {
            printf("O ano %i é bissexto.\n");
        } else {
            printf("O ano %i não é bissexto. \n");
        }
    }

    void verificarMes(int mes, int ano) {
        switch (mes)
    {
        case 1:
            printf("O mês é janeiro\n");
            verificarBissexto(ano);
            break;
        case 2:
            printf("O mês é fevereiro\n");
            verificarBissexto(ano);
            break;
        case 3:
            printf("O mês é março\n");
            verificarBissexto(ano);
            break;
        case 4:
            printf("O mês é abril\n");
            verificarBissexto(ano);
            break;
        case 5:
            printf("O mês é maio\n");
            verificarBissexto(ano);
            break;
        case 6:
            printf("O mês é junho\n");
            verificarBissexto(ano);
            break;
        case 7:
            printf("O mês é julho\n");
            verificarBissexto(ano);
            break;
        case 8:
            printf("O mês é agosto\n");
            verificarBissexto(ano);
            break;
        case 9:
            printf("O mês é setembro\n");
            verificarBissexto(ano);
            break;
        case 10:
            printf("O mês é outubro\n");
            verificarBissexto(ano);
            break;
        case 11:
            printf("O mês é novembro\n");
            verificarBissexto(ano);
            break;
        case 12:
            printf("O mês é dezembro\n");
            verificarBissexto(ano);
            break;
        
    default:
        printf("Operação inválida: O mês está errado. \n");
        break;
    }
}

    int main() {
        setlocale(LC_ALL, "pt_BR.UTF-8");
        int mes;
        int ano;
        // Digitar o mes (1-12)
        // Digitar o ano (verificar se seria bissexto)
        printf("=== CALENDÁRIO - DIAS NO MÊS ===\n");
        printf("Digite o mês: \n");
        scanf("%i", &mes);
        printf("Digite o ano atual: \n");
        scanf("%i", &ano);
        verificarMes(mes, ano); 
  
        return 0;
    }

// Um fabricante de latas deseja desenvolver um algoritmo para calcular o custo de uma lata cilíndrica de alumínio, sabendo-se que o custo do alumínio por m² é R$ 100,00.
// Area Total do Cilindro = 2* Ab + At
#include <stdio.h>
#include <math.h>

double calculoArea(double raio, double altura) {
    const double pi = 3.14159;
    // Area Total = Al 2*pi*r*h + 2Ab pi * r^2 
    double area =  (2 * pi * raio * altura) + (2 * pi * pow(raio,2));

    return area;
}

double conversaoArea(double resultadoArea) {
    double conversao = resultadoArea * pow(10, -4);

    return conversao;
}

    double calcularCusto(double resultadoConversao) {
        double precoAluminio;

        printf("Digite o preço atual do metro por quadrado do alumínio:\n");
        scanf("%lf", &precoAluminio);
        double custo = precoAluminio * resultadoConversao;

        return custo;
    }

int main() {

    double raio = -1;
    double altura = -1;
    double custo;
    // Criar condição de loop while

    while (raio < 0 || altura < 0) {
        printf("Digite o raio para calcular o custo, em :\n");
        scanf("%lf", &raio);

        printf("Digite a altura para calcular o custo:\n");
        scanf("%lf", &altura);

        if (raio > 0 || altura > 0) {


        } if (raio < 0 || altura < 0) {
            printf("O raio ou a altura não pode ser negativa.\n");
        }

    }

    // Calculando Area ok
    double resultadoArea = calculoArea(raio, altura);
    printf("%lf\n", resultadoArea);
    // Fazendo Conversao CM^2 -> M^2 ok
    double resultadoConversao = conversaoArea(resultadoArea);
    printf("%lf\n", resultadoConversao);

    double resultadoCusto = calcularCusto(resultadoConversao);
    printf("O valor das latas seria de %.2lf reais.\n", resultadoCusto);

    return 0;
}
#include <stdio.h>
#include <stdbool.h> 
#include <ctype.h> // Adicionar verificações e conversão 


int main() {

    int idade;
    int bpm = 70;
    int batimentosVida;
    const int minutos = 60;
    const int horas = 24;
    const int diasAnos = 365;

    while (idade < 0 || idade > 150) {
    printf("=== VERIFICADOR DE BPM AO DECORRER DA VIDA ===\n");
    printf("Digite a sua idade: \n");
    scanf("%i", &idade);

    if (idade < 0 || idade > 150) {
        printf("Digite uma idade válida. \n");
    // Adicionar depois uma verificacao
    }
}
    batimentosVida = minutos * horas * diasAnos * idade * bpm; 
    printf("A quantidade de batimentos foi %i", batimentosVida);


    return 0;
}
// Peça peso (kg) e altura (m) ao usuário
// Calcule o IMC: peso / (altura × altura)
// Exiba o resultado com 2 casas decimais
#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("Digite seu peso em kg: \n");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: \n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5) {
        printf("Seu IMC é %.2f e está abaixo do peso. \n", imc);
    } 
    else if (imc >= 18.5 && imc <= 24.9) {
        printf("Seu IMC é %.2f e está com peso normal \n", imc);
    }
    else if (imc >= 25.0 && imc <= 29.9) {
        printf("Seu IMC é %.2f e está com sobrepeso \n", imc);
    }
    else if (imc >= 30.0 && imc <= 34.9) {
        printf("Seu IMC é %.2f e está com Obesidade nível 1.\n", imc);
    }
    else if (imc >= 35.0 && imc <= 39.9) {  
        printf("Seu IMC é %.2f e está com obesidade nível 2.\n", imc);
    }
    else {  
        printf("Seu IMC é %.2f e está com obesidade nível 3.\n", imc);
    }
    
    return 0;
}
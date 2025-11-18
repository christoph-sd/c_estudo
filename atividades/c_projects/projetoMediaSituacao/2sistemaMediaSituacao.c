#include <stdio.h>

int main() {

   char nome[50];
   float nota1, nota2, nota3, media;
   
   //  PROBLEMA 1: Cadastro Básico do Aluno
   printf("=== SISTEMA ACADÊMICO ===\n");
   printf("Nome do aluno: ");
   fgets(nome, sizeof nome, stdin);
    // Limpeza de buffer do teclado
   setbuf(stdin, NULL);
   
   printf("Nota 1: ");
   scanf("%f", &nota1);
   printf("Nota 2: ");
   scanf("%f", &nota2);
   printf("Nota 3: ");
   scanf("%f", &nota3);
   printf("--- Dados Cadastrados ---\n");
   printf("Aluno: %s\n", nome);
   printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);

   // PROBLEMA 2: Cálculo de Média e Situação
   media = (nota1 + nota2 + nota3) / 3;


   if (media >= 7) {
    printf("Média: %.2f (Aprovado). \n", media);
   } else if (media > 4) {
    printf("Média: %.2f (Exame Final). \n", media);
   } else {
    printf("Média %.2f: (Reprovado). \n", media);
   }





    return 0;
}
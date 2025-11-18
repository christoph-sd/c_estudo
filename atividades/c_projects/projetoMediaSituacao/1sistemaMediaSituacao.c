#include <stdio.h>

int main() {

   char nome[50];
   float nota1, nota2, nota3;
   
   
   printf("=== SISTEMA ACADÊMICO ===\n");
   printf("Nome do aluno: ");
   fgets(nome, sizeof nome, stdin);
   printf("Nota 1: ");
   scanf("%f", &nota1);
   printf("Nota 2: ");
   scanf("%f", &nota2);
   printf("Nota 3: ");
   scanf("%f", &nota3);
   printf("--- Dados Cadastrados ---\n");
   printf("Aluno: %s\n", nome);
   printf("Notas: %.2f, %.2f, %.2f", nota1, nota2, nota3);

    return 0;
}
#include <stdio.h>
#include <string.h>


int main() {
    char nome[30];
    char sobrenome[30];
    int idade;
    char cidade[30];
    char profissao[30];

    printf("Qual é seu nome: \n");
    fgets(nome, sizeof(nome), stdin);
    printf("Qual é seu sobrenome: \n");
    fgets(sobrenome, sizeof(sobrenome), stdin);
    nome[strcspn(nome, "\n")] = 0;
    sobrenome[strcspn(sobrenome, "\n")] = 0;
    printf("Qual sua idade: \n");
    scanf("%i", &idade);
    getchar();
    printf("Qual sua cidade: \n");
    fgets(cidade, sizeof(cidade), stdin);
    printf("Qual a sua profissão: \n");
    fgets(profissao, sizeof(profissao), stdin);
    
    strcat(nome, sobrenome);
    printf("========= PERFIL =========\n");
    printf("Nome: %s\n", nome, sobrenome); 
    printf("Idade: %i anos\n", idade);
    printf("Cidade: %s\n", cidade);
    printf("Profissão: %s\n", profissao);

}
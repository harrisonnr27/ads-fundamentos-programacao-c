#include <stdio.h>
#include <string.h>

int main() {

int idade, matricula;
float altura;
char nome[50];

    printf("Digite o nome completo: ");
    fgets(nome, 50, stdin);

    nome[strcspn(nome, "\n")] = 0;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite a matricula: ");
    scanf("%d", &matricula);

    printf("\n=== Dados do Aluno ===\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Matricula: %d\n", matricula);

return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    char endereco[150];
    int idade;
    float altura;

    // Entrada de dados
    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // remove '\n' do final

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    getchar(); // limpa o buffer antes de ler o endereço

    printf("Digite seu endereco: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0'; // remove '\n'

    // Exibição dos dados
    printf("\n===== Cadastro =====\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Endereco: %s\n", endereco);
    printf("====================\n");

    return 0;
}

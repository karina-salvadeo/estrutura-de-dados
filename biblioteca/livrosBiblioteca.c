// Aula 1 - Estruturas de Dados: Conceitos e Representação
// PRÁTICA 1: SISTEMA DE BIBLIOTECA
// 
// * Cadastro e listagem de livros usando um array estático
// * Foco em structs, entrada/saída de dados e organização básica

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // para strcspn()

// Constantes globais
#define MAX_LIVROS 50
#define TAM_STRING 100

// Definição da estrutura
struct Livro {
    char nome[TAM_STRING]; // definição de 3 vetores/campos
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao; // definição de um membro
};

// Função para limpar buffer de entrada
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função principal
int main () {
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    // Laço principal do menu
    do {

        // Exibe o menu de opções
        printf("=============================================\n");
        printf("   Bem vindo(a) à sua Biblioteca Virtual\n");
        printf("=============================================\n");
        printf("Selecione a opção desejada:\n");
        printf("1: Cadastrar novo livro\n");
        printf("2: Listar todos os livros cadastrados\n");
        printf("0: Sair\n");
        printf("=============================================\n");
        printf("Opção desejada: ");

        // Lê a opção escolhida pelo usuário
        scanf("%d", &opcao);
        limparBufferEntrada(); // limpa o \n deixado pelo scanf

        // Processamento das opções
        switch (opcao) {
            case 1: // CADASTRO DE LIVRO
                printf("--- Cadastro de livro novo: ---\n\n");

                if (totalLivros < MAX_LIVROS) {
                    printf("Nome do livro: ");
                    fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                    printf("Autor: ");
                    fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                    printf("Editora: ");
                    fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

                    biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = 
                }
        }
    } 


}

#include <stdio.h>
#include "tipo.c"

// 1. Função de Cadastro
void cadastrarLivros(Livro livros[], int qtd) {
    int i;

    for (i = 0; i < qtd; i++) {

        printf("\n--- Livro %d ---\n", i + 1);

        printf("Titulo: ");
        scanf(" %[^\n]", livros[i].titulo);

        printf("Autor: ");
        scanf(" %[^\n]", livros[i].autor);

        printf("Ano da Publicacao: ");
        scanf("%d", &livros[i].anoPubli);

        printf("Quantidade de Paginas: ");
        scanf("%d", &livros[i].qtdPag);
    }
}

// 2. Função de Ordenar
void ordenarAnoPubli(Livro livros[], int qtd) {

    Livro aux;
    int i, j;

    for (i = 0; i < qtd - 1; i++) {

        for (j = i + 1; j < qtd; j++) {

            if (livros[i].anoPubli > livros[j].anoPubli) {

                aux = livros[i];
                livros[i] = livros[j];
                livros[j] = aux;
            }
        }
    }
}

// 3. Função de Listar
void listarLivros(Livro livros[], int qtd) {

    int i;

    printf("\n====================================\n");
    printf("LIVROS ORDENADOS POR ANO PUBLICACAO\n");
    printf("====================================\n");

    for (i = 0; i < qtd; i++) {

        printf("\nTitulo: %s", livros[i].titulo);
        printf("\nAutor: %s", livros[i].autor);
        printf("\nAno Publicacao: %d", livros[i].anoPubli);
        printf("\nQuantidade Paginas: %d\n", livros[i].qtdPag);
    }

    // Livro mais antigo
    printf("\n====================================\n");
    printf("LIVRO MAIS ANTIGO\n");
    printf("====================================\n");

    printf("Titulo: %s\n", livros[0].titulo);
    printf("Ano: %d\n", livros[0].anoPubli);

    // Livro mais recente
    printf("\n====================================\n");
    printf("LIVRO MAIS RECENTE\n");
    printf("====================================\n");

    printf("Titulo: %s\n", livros[qtd - 1].titulo);
    printf("Ano: %d\n", livros[qtd - 1].anoPubli);
}
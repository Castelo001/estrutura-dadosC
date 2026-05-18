#include <stdio.h>
#include "funcao.c"

int main() {

    Livro listaLivros[100];
    int qtd;

    printf("SISTEMA CADASTRO DE LIVROS\n");

    printf("Quantos livros deseja cadastrar? ");
    scanf("%d", &qtd);

    if (qtd > 100 || qtd <= 0) {

        printf("Quantidade invalida!\n");
        return 1;
    }

    // Cadastro
    cadastrarLivros(listaLivros, qtd);

    // Ordenação
    ordenarAnoPubli(listaLivros, qtd);

    // Listagem
    listarLivros(listaLivros, qtd);

    return 0;
}
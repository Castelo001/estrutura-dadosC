#include <stdio.h>
#include "funcoes.c"
int main() {
    // Criamos um vetor est�tico capaz de guardar at� 100 livros
    Livro listaLivros[100]; 
    int qtd;	
    
    printf("SISTEMA CADASTRO DE LIVROS");
    printf("Quantos livros deseja cadastrar? ");
    scanf("%d", &qtd);
    
    // Valida��o simples para n�o estourar o nosso vetor de 100 posi��es
    if (qtd > 100 || qtd <= 0) {
        printf("Quantidade invalida! Digite um valor entre 1 e 100.\n");
        return 1; // Encerra o programa com erro
    }
    
    // Passo 1: Alimentar o vetor
    cadastrarLivros(listaLivros, qtd);
    
    // Passo 2: Ordenar os dados dentro do vetor
    ordenarAnoPubli(listaLivros, qtd); //ordenar por ano de publi
    
    // Passo 3: Exibir o resultado final na tela
    listarLivros(listaLivros, qtd);
    
    return 0; // Sucesso
}

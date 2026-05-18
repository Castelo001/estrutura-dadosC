#include "tipo.c"
void cadastrarLivro(Livro livros[], int qtd) {
    int i; // Declarando fora para o compilador antigo aceitar
    for (i = 0; i < qtd; i++) {
        printf("\n--- Livro %d ---\n", i + 1);
        
        printf("Título: ");
        scanf(" %[^\n]", livros[i].titulo);
		
		printf("Autor: ");
        scanf(" %[^\n]", livros[i].autor); 
        
        printf("Ano da Publicação: ");
        scanf("%d", &livros[i].anoPubli);
        
        printf("NºPaginas: ");
        scanf("%d", &livros[i].qtdPag);
    }
}

// 2. Fun��o de Ordenar
void ordenarAnoPubli(Livro livros[], int qtd) {
    Livro aux;
    int i, j; // Declarando fora aqui tamb�m
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

// 3. Fun��o de Listar
void listarlivros(Livro livros[], int qtd) {
    int i; // Declarando fora aqui tamb�m
    printf("\n===================================\n");
    printf("   Livros ORDENADOS POR Ano de Publicação\n");
    printf("===================================\n");
    
    for (i = 0; i < qtd; i++) {
        printf("anoPubli: %d | titulo: %-20s | NºPaginas: %.2f\n | Autor %-20s", 
               livros[i].anoPubli, 
               livros[i].titulo, 
			   livros[i].qtdPag,
               livros[i].autor);
   
    }
}

#include <stdio.h>
#include <stdlib.h>

// Montar Estrutura do nó
struct No {
    int valor;
    struct No *esquerda;
    struct No *direita;
};

// Função para criar um novo nó
struct No* novoNo(int valor) {
    // Reserva espaço na memória
    struct No* no = malloc(sizeof(struct No));
    
    // Guarda o valor
    no->valor = valor;
    
    // Começa sem filhos
    no->esquerda = NULL;
    no->direita = NULL;
    
    return no;
}

// Função para inserir valores
struct No* inserir(struct No* raiz, int valor) {
    // Se a árvore estiver vazia
    if (raiz == NULL) {
        return novoNo(valor);
    }
    
    // Vai para esquerda
    if (valor < raiz->valor) {
        raiz->esquerda = inserir(raiz->esquerda, valor);
    }
    // Vai para direita
    else {
        raiz->direita = inserir(raiz->direita, valor);
    }
    
    return raiz;
}

// Mostrar em ordem crescente
void mostrar(struct No* raiz) {
    if (raiz != NULL) {
        // esquerda
        mostrar(raiz->esquerda);
        
        // raiz
        printf("%d ", raiz->valor);
        
        // direita
        mostrar(raiz->direita);
    }
}

int main() {
    // Árvore começa vazia
    struct No* raiz = NULL;
    
    printf("Digite o primeiro número")
    scanf
    raiz = inserir(raiz, 8);
    raiz = inserir(raiz, 3);
    raiz = inserir(raiz, 10);
    raiz = inserir(raiz, 1);
    raiz = inserir(raiz, 6);
    
    // Mostrar resultado
    printf("Valores em ordem:\n");
    mostrar(raiz);
    printf("\n"); // Apenas adiciona uma quebra de linha no final do console
    
    return 0;
}
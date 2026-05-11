#include <stdio.h>

typedef struct {
    int id;
    char nome[50];
    int quantidade;
} Produto;

void ExibirRelatorio(Produto p) {

    if (p.quantidade < 10) {
        printf("Estoque baixo\n");
    }

    printf("Id: %d\n", p.id);
    printf("Nome: %s\n", p.nome);
    printf("Quantidade: %d\n", p.quantidade);
}

int main() {
   
    Produto p;

    printf("Digite o id do produto: ");
    scanf("%d", &p.id);

    printf("Digite o nome: ");
    scanf("%s", p.nome);

    printf("Digite a quantidade: ");
    scanf("%d", &p.quantidade);

    ExibirRelatorio(p);
} 

    
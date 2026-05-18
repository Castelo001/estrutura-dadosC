#include <stdio.h>
#include "funcoes.c"
int main() {
    // Criamos um vetor estático capaz de guardar até 100 alunos
    Aluno listaAlunos[100]; 
    int qtd;	
    
    printf("=== SISTEMA DE CADASTRO DE TURMA ===\n");
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &qtd);
    
    // Validação simples para não estourar o nosso vetor de 100 posições
    if (qtd > 100 || qtd <= 0) {
        printf("Quantidade invalida! Digite um valor entre 1 e 100.\n");
        return 1; // Encerra o programa com erro
    }
    
    // Passo 1: Alimentar o vetor
    cadastrarAlunos(listaAlunos, qtd);
    
    // Passo 2: Ordenar os dados dentro do vetor
    ordenarPorNota(listaAlunos, qtd);
    
    // Passo 3: Exibir o resultado final na tela
    listarAlunos(listaAlunos, qtd);
    
    return 0; // Sucesso
}

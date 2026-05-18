#include "tipo.c"
void cadastrarAlunos(Aluno alunos[], int qtd) {
    int i; // Declarando fora para o compilador antigo aceitar
    for (i = 0; i < qtd; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome); 
        
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }
}

// 2. Função de Ordenar
void ordenarPorNota(Aluno alunos[], int qtd) {
    Aluno aux;
    int i, j; // Declarando fora aqui também
    for (i = 0; i < qtd - 1; i++) {
        for (j = i + 1; j < qtd; j++) {
            if (alunos[i].nota > alunos[j].nota) {
                aux = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = aux;
            }
        }
    }
}

// 3. Função de Listar
void listarAlunos(Aluno alunos[], int qtd) {
    int i; // Declarando fora aqui também
    printf("\n===================================\n");
    printf("   ALUNOS ORDENADOS POR NOTA       \n");
    printf("===================================\n");
    
    for (i = 0; i < qtd; i++) {
        printf("Matricula: %d | Nome: %-20s | Nota: %.2f\n", 
               alunos[i].matricula, 
               alunos[i].nome, 
               alunos[i].nota);
    }
}

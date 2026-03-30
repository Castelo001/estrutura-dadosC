#include <stdio.h>

int main() {
    char nomes[3][50];
    float notas[3];
    float soma = 0, media;
    int i;

    // Entrada de dados
    for(i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }

    // Cálculo da média geral
    media = soma / 3;

    // Exibir resultados individuais
    printf("\n--- Resultados Individuais ---\n");
    for(i = 0; i < 3; i++) {
        printf("Aluno: %s | Nota: %.2f | ", nomes[i]);

        if(notas[i] >= 7) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    // Exibir soma e média geral
    printf("\nSoma das notas: %.2f\n", soma);
    printf("Media da turma: %.2f\n", media);

    return 0;
}
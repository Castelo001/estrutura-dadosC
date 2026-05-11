//cria vetor Aluno
void cadastrarAlunos(Aluno alunos[],int qtd){
    //for para percorrer o aluno e alimentar o vetor Aluno
    for(i=0; i<qtd;i++){
printf("\nAluno %d\n", i+1);

printf("nome ");
scanf("%[^\n]", alunos[i].nome);

printf("matricula: ");
scanf("%d", &alunos[i].matricula);

printf("Nota : ");
scanf("%f",&alunos[i].nota);
    }
}
//Função para ordenar

void ordenarPorNota(Aluno alunos[],int qtd){
    //Cria uma variável auxiliar tipo Aluno.
    Aluno aux;

    // Para ordenar for dentro de outro for dentro do if  para ordenarfunção crescente.
    for(int i = 0; i<qtd -1; i++){
        for(int j = i+1; j<qtd; j++){
            if(alunos[i].nota > alunos[j].nota){
                aux = alunos[i];
                alunos [i]= alunos[j];
                alunos[j] = aux;
            }
        }
    }
}

// Exibir alunos ordenados
void listarAlunos(Aluno alunos[], int qtd){
    printf("\n--Alunos ordanados por nota --\n");

    for(int i =0; i< qtd; i++){
        pritf("\nNome:")
    }
}
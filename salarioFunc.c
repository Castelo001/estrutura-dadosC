typedef struct{
    char nome[40];
    float salario;
} Funcionario;  

#include <stdio.h>
#include <string.h> 

int main(){
    Funcionario lista[4];
    int indiceMaior=0;

    for(int i=0; i<4; i++){
        printf("Nome: ");
        scanf("%s",lista[i].nome);

        printf("Salário : ");
        scanf("%f",&lista[i].salario);

        if(lista[i].salario>3000){
            printf("%s\n", lista[i].nome);
        }
    
    }
    printf("Os funcionários com salário acima de 3000 são: %s\n",lista[indiceMaior].nome);

    return 0;
    
}
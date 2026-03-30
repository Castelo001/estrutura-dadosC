
#include <stdio.h>
#include <string.h>


typedef struct {
    char modelo[40];
    float preco[50];
}Carro;
int main(){
    Carro lista[3];
    int indiceMaior=0;

    for(int i=0; i<3; i++){
        printf("Modelo: ");
        scanf("%s",lista[i].modelo);

        printf("Preço : ");
        scanf("%f",&lista[i].preco[0]);

        if(lista[i].preco[0]>lista[indiceMaior].preco[0]){
            indiceMaior = i;
        }
    
    }
    printf("O carro mais caro é o %s\n",lista[indiceMaior].modelo);

    return 0;
    
}
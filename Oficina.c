#include<stdio.h>
typedef struct{
char marca[40];
char modelo[40];
int ano[4];
}Veiculo;

int main(){
    Veiculo v1;
    printf("Digite a marca");
    scanf("%s ",v1.marca);
printf("Digite o modelo");
    scanf("%s ",v1.modelo);
printf("Digite o ano: ");
scanf("%d",v1.ano);

printf("\n A ficha do veículo:")



}
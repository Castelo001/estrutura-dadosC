float calcularArea(float largura, float comprimeito){
    return largura * comprimeito;
}

typedef struct {
float largura;
float comprimento;
}Comodo;

float calcular_area(Comodo c){
    return (c.largura*c.comprimento);
}

#include <stdio.h>
//importa a função que criou com o #include
//#include "modulo.c"
int main(){
Comodo minhaSala;

printf("Digite a largura da sala(m)");
scanf("%f",&minhaSala.largura);

printf("Digite o comprimento da sala(m)");
scanf("%f",&minhaSala.comprimento);

float area = calcular_area(minhaSala);
float precoPiso = 130.0*area;

printf("A área total da sala é : %.2f Total R$ %.2f",area,precoPiso);

return 0;
}

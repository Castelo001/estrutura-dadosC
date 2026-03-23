//Consultor de Viagem
//criar dois arquivos um calculo 
int fazer_soma(int a , int b){
    return a+b;
}
// Cria outro arquivo para fazer os procedimentos
#include <stdio.h>
//importa a função que criou com o #include
//#include "calcC"
int main(){
int resultado;

resultado = fazer_soma(30,30);

printf("O resultado da soma é: %d",resultado);

return(0);
}
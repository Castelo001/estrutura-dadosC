// Online C compiler to run C program online
#include <stdio.h>
typedef struct{
    char nome[30];
float preco;
    
}Prato;
int main() {
   Prato p1,p2;
   printf("Prato 1 e Preço");
   scanf("%s %f",p1.nome, &p1.preco);
   printf("Prato 2 e Preço");
   scanf("%s %f",p2.nome, &p2.preco);

printf("\n0 total do Pedido : R$ %.2f", p1.preco+p2.preco);
   if(p1.preco > p2.preco){
       printf ("Mais caro: %s",p1);
   }else{
       printf("Mais caro: %s",p2);
   }
   }

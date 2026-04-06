#include<stdio.h>
#include<stdlib.h>
//Molde do vagao
struct Vagao{
    int carga;
    struct Vagao *proximo;
};

int contarVagoes(struct Vagao *cabeca){
    int contador = 0;
    struct Vagao *atual = cabeca;
    while (atual !=NULL){
        contador++;
        atual = atual->proximo;
    }
    return contador;
}
int main(){
    struct Vagao *v1 = (struct Vagao *) malloc(sizeof(struct Vagao));
    struct Vagao *v2 = (struct Vagao *) malloc(sizeof(struct Vagao));
    struct Vagao *v3 = (struct Vagao *) malloc(sizeof(struct Vagao));

v1->carga = 10; v1->proximo = v2;
v2->carga = 50; v2->proximo = v3;
v3->carga = 90; v3->proximo = NULL;

int total = contarVagoes(v1);
printf("O trem tem %d vagoes no total. \n",total);

return 0;


}
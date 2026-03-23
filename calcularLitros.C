float calcularLitros(float distancia,float consumo ){
return distancia/consumo;

}

#include <stdio.h>
//importa a função que criou com o #include
//#include "modulo.c"
int main(){
float d, c, total, valorReal;

printf("Distância (km) : ");
scanf("%f",&d);

printf("Consumo (km/l) : ");
scanf("%f",&c);

total = calcular_litros(d,c);
valorReal=total*7.0;

printf("Você precisará de %.2f litros \n e gastar: %.2f",total,valorReal);



return(0);
}
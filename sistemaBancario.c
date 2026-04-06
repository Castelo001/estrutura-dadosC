
// tudo vai ser modelarizado e e feito os icluds para acessar
typedef struct
{
    float saldo;
    char nomeTitular[50];
    int numeroConta[6];
} ContaBancaria;
#include <stdio.h>
#include <string.h>
// Funções para depositar , usa * ponteiro e não por & valor
void depositar(ContaBancaria *c, float valor)
{
    if (valor > 0){
        c->saldo += valor;
        printf("Depósito de R$ %.2f realizado com sucesso!\n", valor);
    }else{
        printf("Valor de depósito inválido. \n")
    }
}
//Funcao sacar valor
void sacar(ContaBancaria *c, float valor)
{
    if (valor > 0 && valor <= c->saldo)
    {
        c->saldo -= valor;
        printf("Saque R$ %.2f realizado com sucesso!\n", valor);
    }
    else
    {
        printf("Saque negado: Saldo insuficiente ou valor inválido\n");
    }
}
void exibirSaldo(ContaBancaria c){
    printf("\n--- STATUS DA CONTA ---");
    printf("\nTitular: %s", c.nomeTitular);
    printf("\Nº da Conta: %d", c.numeroConta);
    printf("\nSaldo Atual: R$ %.2f\n", c.saldo);
    printf("-------------------------\n");
} int main() {
//Inicializando uma conta
ContaBancaria minhaConta;
minhaConta.numeroConta = 1001;
strcpy(minhaConta.titular, "Fulano de Tal");
minhaConta.saldo = 500.00; // Saldo inicial
exibirSaldo(minhaConta);
// Testando as operações depositar (8minhaConta, 250.00):
sacar (&minhaConta, 100.00);
sacar (EminhaConta,
800,00); // Tentativa de saque maior que o saldo
exibirSaldo(minhaConta);
return 0;
}

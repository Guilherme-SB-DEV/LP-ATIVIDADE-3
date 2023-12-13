#include <stdio.h>
#include <stdlib.h>
typedef struct conta
{
    char titular[20];
    char numero[14];
    float saldo;
    char tipo[10];
}conta;

conta Conta;
float sacar(float valor, conta Conta){
    return Conta.saldo - valor;
}




int main(){
    float valorr;
    conta Conta;
    printf("titular: ");
    
    gets(Conta.titular);
    fflush(stdin);
    
    printf("saldo: ");
    scanf("%f", &Conta.saldo);
    
    printf("quanto sacar: ");
    scanf("%f", &valorr);

    printf("titular: %s\n", Conta.titular);
    printf("saldo: %.2f", sacar(valorr, Conta));
        

    return 0;
}
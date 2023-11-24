#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main (){
    setlocale(LC_ALL, "Portuguese");
    char nomes[5][100];
    float idade[5], peso[5], altura[5], maiorNumero, menorNumero;
    int i, j, index, index2;
    
    for(i=0; i<5; i++){
        fflush(stdin);
        printf("nome: ");
        gets(&nomes[i]);
        
        printf("idade: ");
        scanf("%f", &idade[i]);
        printf("altura: ");
    	scanf("%f", &altura[i]);
        printf("peso: ");
        scanf("%f", &peso[i]);
        maiorNumero = maiorNumero > altura[i] ? maiorNumero:altura[i];    
        menorNumero = menorNumero < altura[i] ? menorNumero:altura[i];     
		
    }
    for(i=0; i<5; i++){
    	printf("\n\n\n");
    	printf("nome: %s\n", nomes[i]);
    	printf("idade: %.0f\n", idade[i]);
    	printf("peso: %.2f\n", peso[i]);
    	printf("altura: %.2f\n\n\n", altura[i]);
    	index = altura[i]==maiorNumero?i:0;
		index2 = altura[i]==menorNumero?i:0;    	
    	
	}
	printf("\n\n\n");
	printf("maior altura: \n");
	printf("nome: %s\n", nomes[index]);
	printf("idade: %.0f\n", idade[index]);
	printf("peso: %.2f\n", peso[index]);
	printf("altura: %.2f", altura[index]);
	
	printf("\n\n\n");
	printf("menor altura: \n");
	printf("nome: %s\n", nomes[index2]);
	printf("idade: %.0f\n", idade[index2]);
	printf("peso: %.2f\n", peso[index2]);
	printf("altura: %.2f\n", altura[index2]);
	





    return 0;
}

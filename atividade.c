#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main (){
    setlocale(LC_ALL, "Portuguese");
    char nomes[5][100];
    float idade[5], peso[5], altura[5], maiorNumero, menorNumero;
    int i, indexmax, indexmin, indexmax2, indexmin2, indexmax3, indexmin3;
    
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
		maiorNumero2 = maiorNumero2 > idade[i] ? maiorNumero2:idade[i];
		menorNumero2 = menorNumero2 < idade[i] ? menorNumero2:idade[i];
		maiorNumero3 = maiorNumero3 > peso[i] ? maiorNumero3:peso[i];
		menorNumero3 = menorNumero3 < peso[i] ? menorNumero3:peso[i];		  
		
    }
    for(i=0; i<5; i++){
    	printf("\n\n\n");
    	printf("nome: %s\n", nomes[i]);
    	printf("idade: %.0f\n", idade[i]);
    	printf("peso: %.2f\n", peso[i]);
    	printf("altura: %.2f\n\n\n", altura[i]);
    	
    	indexmax = altura[i]==maiorNumero?i:0;
		indexmin = altura[i]==menorNumero?i:0;
		
		indexmax2 = idade[i]==maiorNumero2?i:0;
		indexmin2 = idade[i]==menorNumero2?i:0;
		
		indexmax3 = peso[i]==maiorNumero3?i:0;
		indexmin3 = peso[i]==menorNumero3?i:0;		
		
		    	
    	
	}
	printf("\n\n\n");
	printf("maior altura: \n");
	printf("nome: %s\n", nomes[indexmax]);
	printf("idade: %.0f\n", idade[indexmax]);
	printf("peso: %.2f\n", peso[indexmax]);
	printf("altura: %.2f", altura[indexmax]);

	
	printf("\n\n\n");
	printf("menor altura: \n");
	printf("nome: %s\n", nomes[indexmin]);
	printf("idade: %.0f\n", idade[indexmin]);
	printf("peso: %.2f\n", peso[indexmin]);
	printf("altura: %.2f\n", altura[indexmin]);
	
	printf("\n\n\n");
	printf("maior idade: \n");
	printf("nome: %s\n", nomes[indexmax2]);
	printf("idade: %.0f\n", idade[indexmax2]);
	printf("peso: %.2f\n", peso[indexmax2]);
	printf("altura: %.2f", altura[indexmax2]);	
	
	printf("\n\n\n");
	printf("menor idade: \n");
	printf("nome: %s\n", nomes[indexmin2]);
	printf("idade: %.0f\n", idade[indexmin2]);
	printf("peso: %.2f\n", peso[indexmin2]);
	printf("altura: %.2f\n", altura[indexmin2]);
	
	printf("\n\n\n");
	printf("maior peso: \n");
	printf("nome: %s\n", nomes[indexmax3]);
	printf("idade: %.0f\n", idade[indexmax3]);
	printf("peso: %.2f\n", peso[indexmax3]);
	printf("altura: %.2f", altura[indexmax3]);
	
	printf("\n\n\n");
	printf("menor peso: \n");
	printf("nome: %s\n", nomes[indexmin3]);
	printf("idade: %.0f\n", idade[indexmin3]);
	printf("peso: %.2f\n", peso[indexmin3]);
	printf("altura: %.2f\n", altura[indexmin3]);
	
	




    return 0;
}




    return 0;
}

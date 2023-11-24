#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    char nome[10][100], numero[10][100];
    int opcao, i, counter=0;
	
	printf("|-----------Menu------------|\n");
    printf("|codigo | alternatinas      |\n");
    printf("|1      | Novo numero        |\n");
    printf("|2      | exibir numero    |\n");
    printf("|-----------Fim-------------|\n");
    
	do{
		
		printf("opção: ");
		scanf("%i", &opcao);
		if(opcao ==1){	
		
			printf("nome: ");
			fflush(stdin);
			gets(nome[counter]);
			printf("numero: ");
			fflush(stdin);
			gets(numero[counter]);
			counter++;
			
		}else break;			
					
		
	}while(opcao=1);
	
	for(i=0; i<counter; i++){
		printf("\n\n\n");
		printf("nome: %s\n", nome[i]);
		printf("numero: %s\n", numero[i]);
	}
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int i, numero[5], soma = 0, quantidade = 0, somaPar = 0, pares = 0, somaImpar = 0, impares = 0, maiornumero = 0, menornumero=0, contadornegativo = 0, contadorpositivo = 0;
    float mediaPar = 0, mediaImpar = 0, media = 0;
    
    

    for (i = 0; i < 5; i++) {
        printf("Digite o %d número: ", i +1);
        scanf("%d", &numero[i]);
        quantidade++;

        soma += numero[i];

        maiornumero = maiornumero > numero[i] ? maiornumero : numero[i];
        menornumero = menornumero < numero[i] ? menornumero : numero[i];

        if (numero[i] % 2 == 0) {
            pares++;
            somaPar += numero[i];
        } else {
            impares++;
            somaImpar += numero[i];
        }

        if (numero[i] < 0) {
            contadornegativo++;
        } else if (numero[i] > 0) {
            contadorpositivo++;
        }
    }

    media = soma / 5;

    printf("ímpares: %d \n", impares);
    printf("negativos: %d \n", contadornegativo);
    printf("maior: %d \n", maiornumero);
    printf("menor: %d \n", menornumero);
    printf("média: %.1f \n", media);
    
    return 0;
}

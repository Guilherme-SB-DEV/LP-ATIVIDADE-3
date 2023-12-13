#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    char nome[20];
    char data[8];
    float nota1;
    float nota2;
    float media;

} aluno;
aluno alunos[2];


float calcMedia(aluno *alunos){
    int i;
    for(i=0; i<2; i++){
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2)/2;
        printf("aluno: %s\n", alunos[i].nome);
        printf("media: %f\n", alunos[i].media);
        if(alunos[i].media >= 7){
            printf("aluno aprovado \n");}
    }
}


int main(){
    int i;
    aluno alunos[2];
    for(i=0; i<2; i++){
        printf("nome do aluno: ");
        fflush(stdin);
        gets(alunos[i].nome);
        fflush(stdin);
        printf("data de nascimento: ");
        fflush(stdin);
        gets(alunos[i].data);
        fflush(stdin);
        printf("notas: ");
        scanf("%f", &alunos[i].nota1);
        printf("nota2: ");
        scanf("%f", &alunos[i].nota2);
    }
    calcMedia(alunos);


    return 0;
}
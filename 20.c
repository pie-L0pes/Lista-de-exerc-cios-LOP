// Bibliotecas para acessar funções de fora
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    
    //Criar biblioteca e declarar variavel
    typedef struct{
        char nome[50];
        float mediafinal;
    }aluno;
    
    int main() {
    //Chamar Biblioteca
    setlocale (LC_ALL, "");
    
    //Declarar váriavel e o tipo dela 
    float mediaturma;
    aluno media[5];
    int i;
    
    //Pedir nome e notas
    for (i=0; i<5; i++){
        printf("Informe o nome do aluno %d:\n", i+1);
        scanf("%[^\n]", media[i].nome);
        getchar ();
        printf("Informe a média do aluno %d:\n", i+1);
        scanf("%f", &media[i].mediafinal);
        getchar();
        system ("clear");
    }
    
    //Somar notas
    for (i=0; i<5; i++){
    mediaturma= mediaturma+ media[i].mediafinal;
    }
    
    //Informar a média
    printf("Média geral da turma: %.1f", mediaturma/5);
    
    //Finalizar programação
    return 0;
    }
    
    
    
    
    
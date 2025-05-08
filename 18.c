// Bibliotecas para acessar funções de fora
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    
    //Criar biblioteca e declarar variavel
    typedef struct{
        char nome[50];
        float nota[3];
    }aluno;
    
    int main() {
    //Chamar Biblioteca
    setlocale (LC_ALL, "");
    
    //Declarar váriavel e o tipo dela 
    float media;
    aluno notas;
    int i;
    char *aprovacao;
    
    //Pedir nome do aluno
    printf("Informe o nome do aluno:\n");
    scanf("%[^\n]", notas.nome);
    getchar ();
    system("clear");
    
    //Pedir as notas
    for (i=0; i<3; i++){
        printf("Informe a nota %d do aluno:\n", i+1);
        scanf("%f", &notas.nota[i]);
        getchar();
        system ("clear");
    }
    
    //Somar as notas e calcular a média
    for (i=0; i<3; i++){
    media= (media+ notas.nota[i])/3;
    }
    
    //Verificar se foi aprovado
    if(media>=7){
        aprovacao= "Aprovado!!";
    }
    else{
        aprovacao= "Reprovado!!";
    }
    
    //Informar a média e status
    printf("Média: %.1f\n", media);
    printf("Status:%s\n", aprovacao);
    
    //Finalizar o programa
    return 0;
    }
    
    
    
    
    
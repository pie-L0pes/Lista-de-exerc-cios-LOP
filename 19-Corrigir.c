// Bibliotecas para acessar funções de fora
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Criar Um espaço separado
typedef struct{
    char nome[20];
    int idade;
    float media;
}P;

 int main() {
    //Chamar Biblioteca
    setlocale (LC_ALL, "");
    
    
    //Informações dos alunos
    P alunos [3]={{"Pietra", 16, 9.5},
                  {"Tamires", 18, 9.3},
                  {"José", 12, 6.5},
    };
    
    //Declarar variavel e seu tipo
    char nome[20];
   
    //Pedir nome do aluno que deseja
    printf("Informe o nome do Aluno que deseja:\n");
    scanf("%s", nome);
       
    //Tentar encontrar o Aluno
    if (nome==alunos[0].nome){
        printf("Nome:%s\n", alunos[0].nome);
        printf("Idade:%d\n", alunos[0].idade);
        printf("Nome:%.1f\n", alunos[0].media);
    }
    else if (nome==alunos[1].nome){
        printf("Nome:%s\n", alunos[1].nome);
        printf("Idade:%d\n", alunos[1].idade);
        printf("Nome:%.1f\n", alunos[1].media);
    }
     else if (nome==alunos[2].nome){
        printf("Nome:%s\n", alunos[2].nome);
        printf("Idade:%d\n", alunos[2].idade);
        printf("Nome:%.1f\n", alunos[2].media);
    }
     //Usuário não encontrado
     else{
         printf("Aluno não encontrado!!");
     }
    
    //Finalizar programa
    return 0;
 }
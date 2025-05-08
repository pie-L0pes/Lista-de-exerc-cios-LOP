// Bibliotecas para acessar funções de fora
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Criar Um espaço separado
typedef struct{
    char nome[20];
    int idade;
}P;

 int main() {
    //Chamar Biblioteca
    setlocale (LC_ALL, "");
    
    
    //Declarar Variaveis e o tipo delas
    int i, id=0;
    P humano [2];
    char *velho;
    
    //Pedir nome e idade
    for  (i=0; i<2;i++){
        printf("Informe o nome da %d pessoa:\n", i+1);
        scanf("%s", humano[i].nome);
        printf("Informe a idade da %d pessoa:\n", i+1);
        scanf("%d", &humano[i].idade);
        getchar ();
        system ("clear");
    }
    
    //Ver quem é mais velho
    for (i=0; i<2;i++){
        if(humano[i].idade>id){
            velho= humano[i].nome;
        }
    }
    
    //Informar a pessoa mais velha
    printf("%s é a pessoa mais velha!\n", velho);
    
    //Finalizar programa
    return 0;
 }
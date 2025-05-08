// Bibliotecas para acessar funções de fora
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //Chamar Biblioteca
    setlocale (LC_ALL, "");
    
    //Declarar váriavel e o tipo dela 
    int n[10];
    int maior=0;
    int menor;
    int i;
    
    //Pedir números para o usuário e guarda-los no local certo da váriavel
    for(i=0; i<10; i++){
        printf("Informe o número %d: \n", i+1);
        scanf("%d", &n[i]);
        system ("clear");
    }
    
    //Analisar qual é maior
    for(i=0;i<10; i++){
        if (maior<n[i]){
            maior=n[i];
        }
    }
    
    //Ajustar adquirição de valor 
    menor= n[0];
    
    //Analisar qual é o menor
    for(i=0;i<10;i++){
        if (menor>n[i]){
            menor=n[i];
        }
    }
    
    //Informar o maior e o menor
    printf("Maior: %d\nMenor: %d", maior, menor);
    
    //Encerrar o programa
    return 0;
}
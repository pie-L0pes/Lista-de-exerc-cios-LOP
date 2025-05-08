#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "");
    
    // Declarar a variavel e o tipo dela
    int n;
    
    // Pedir o número inteiro para o usuário e guardar dentro da variavel declarada no inicio
    printf("Escreva um número inteiro:\n");
    scanf("%d", &n);
    
    // Essa função ira apagar a informação colocada anteriormente após o enter 
    getchar();
    system ("clear");
    
    // Essa função ira definir se o restante da divisão do número colocado ao usuário por dois for 0, então apareça que ele é par
    if (n%2==0){
        printf("Par!");
    }
    
    // Se a informação a cima for falsa, então vai aparecer que ele é impar
    else{
        printf("Impar!");
    }
    
    // Essa função indica que o código acabou com sucesso
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "");
    
    // Declarar a variavel e o tipo dela
    int n[2], i, maior=0;
  
    
    //Pedir os números para o usuário, Ler e guardar os números dentro das posições certas até acabar espaço na variavel
    for(i=0; i<=1; i++){
        printf("Escreva um número:\n");
        scanf("%d", &n[i]);
        getchar();
        system("clear");
    }
    
    //Verificar qual número é maior
    for(i=0; i<=1; i++){
        if (maior<n[i]){
            maior= n[i];
        }
    }
    
    //Mostrar o resultado
    printf("Maior: %d", maior);
    
    
    // Essa função indica que o código acabou com sucesso
    return 0;
}
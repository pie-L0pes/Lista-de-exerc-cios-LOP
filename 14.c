// Bibliotecas para acessar funções de fora
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main() {
    //Chamar Biblioteca
    setlocale (LC_ALL, "");
    
    //Declarar variaveis e o tipo delas
    int i, n[5];
    
    //Pedir números
    for (i=0; i<5; i++){
        printf("Informe o número %d:\n", i+ 1);
        scanf("%d", &n[i]);
        getchar ();
        system ("clear");
    }
    
    //Imprimir ao contrario
     for(i=n[4]; i>=0; i--){
        printf("%d\n", n[i]);
     }
     
   
    
    //Finalizar programa
    return 0;
 }
    
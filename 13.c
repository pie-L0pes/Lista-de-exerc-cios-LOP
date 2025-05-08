// Bibliotecas para acessar funções de fora
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 int main() {
    //Chamar Biblioteca
    setlocale (LC_ALL, "");
    
    //Declarar variaveis e o tipo delas
    int i, n[10], q;
    
    //Pedir números
    for (i=0; i<10; i++){
        printf("Informe o número %d:\n", i+ 1);
        scanf("%d", &n[i]);
        getchar ();
        system ("clear");
    }
    
    //Verificar quantos são pares
     for(i=0; i<10; i++){
        if (n[i]%2==0){
            q=q + 1;
        }
     }
     
    //Informar quantos são pares
    printf("%d valores pares\n", q);
    
    //Finalizar programa
    return 0;
 }
    
#include<locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"");
    // Declaração de variavel e o tipo dela
    int i;
    
    //Vai repitir a função de imprimir na tela até que o número for menor ou igua a 100
    for(i=1; i<=100; i++){
        printf("%d\n", i);
    }
    
    //Finalizar código
    return 0;
}
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    
    //Declaração de variavel e o tipo dela
    int  n, i, tabuada;
    
    //Pedir número e guaradr na váriavel declarada como n
    printf("Digite um número para realizar a tabuada:\n");
    scanf("%d", &n);
    
    //Exibir a tabuada ate que chege no 10
    for(i=0;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,tabuada= n * i );
    }
    
    //Finalizar código
    return 0;
}
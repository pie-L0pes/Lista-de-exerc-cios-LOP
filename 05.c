#include <stdlib.h>
#include<locale.h>
#include <stdio.h>
int main(){
    setlocale(LC_ALL,"");
    
    //Declaração de variavel e o tipo dela;
    float n0, n1, res;
    char operador;
    
    //Pedir os numeros e os operadores
   printf("Digite dois números inteiros e um operador no meio:\n ");
   scanf("%f %c %f", &n0, &operador, &n1);
   
   //Definir o que o programa vai fazer para cada operador
    switch (operador) {
        
        case '+':
        res = n0 + n1;
        printf("%.1f + %.1f = %.1f\n", n0, n1, res);
        break;
        
        case '-':
        res = n0- n1;
        printf("%.1f - %.1f = %.1f\n", n0, n1, res);
        break;
        
        case '*':
        res = n0* n1;
        printf("%.1f * %.1f = %.1f\n", n0, n1, res);
        break;
        
        case '/':
        res = n0/ n1;
        printf("%.1f / %.1f = %.1f", n0, n1, res);
        break;
    }
    
    //finalizar programação
    return 0;
}
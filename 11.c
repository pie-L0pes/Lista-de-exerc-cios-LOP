#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "");
    
   // Declarar a variavel e o tipo dela
    int  i;
    float media,  n[10];
    
    //Pedir os números para o usuário, Ler e guardar os números dentro das posições certas até acabar espaço na variavel
    for(i=0; i<=9; i++){
        printf("Informe o número %d:\n", i+1);
        scanf("%f", &n[i]);
        getchar();
        system("clear");
    }
    
    //Calcular média
    media= (n[0]+ n[1]+n[2]+ n[3]+n[4]+ n[5]+n[6]+ n[7]+n[8]+ n[9] )/10;
    
    //Mostrar a média
    printf("Média: %.2f", media);
    
    //Finalizar código
    return 0;
}
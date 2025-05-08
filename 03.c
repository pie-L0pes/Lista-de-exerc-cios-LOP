#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "");
    
    // Declarar a variavel e o tipo dela
    int  i;
    float n[2], media;
    
    //Pedir as notas para o usuário, Ler e guardar os números dentro das posições certas até acabar espaço na variavel
    for(i=0; i<=1; i++){
        printf("Informe a nota %d:\n", i+1);
        scanf("%f", &n[i]);
        getchar();
        system("clear");
    }
    
    //Calcular média
    media= (n[0]+ n[1])/2;
    
    //Verificar e indicar se ele esta aprovado se (media>=7)
    if(media>=7){
        printf("Aprovado!");
    }
    
    //Senão ele esta reprovado
    else{
        printf("Reprovado!");
    }
    
    // Essa função indica que o código acabou com sucesso
    return 0;
}
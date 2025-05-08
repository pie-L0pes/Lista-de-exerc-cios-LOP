#include<locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"");
    // Declaração de variavel e o tipo dela
    int idade;
    
    //Pedir e guardar a idade o usuário
    printf("Qual é a sua idade?\n");
    scanf("%d", &idade);
    getchar();
    system ("clear");
    
    //Verificar se voto é Obrigatório
    if (idade>=18 && idade<=69)
    {
        printf("Voto obrigatorio!");
    }
    
    // Senão verificar se não pode votar
    else if (idade<16)
    {
        printf ("Nao pode votar!");
    }
    
    // Senão voto é facultativo
    else
    {
        printf("Voto facultativo!");
    }
    
    //Finalizar código
    return 0;
}
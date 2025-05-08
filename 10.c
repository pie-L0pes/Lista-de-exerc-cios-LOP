#include <stdlib.h>
#include<locale.h>
#include <stdio.h>
int main(){
    setlocale(LC_ALL,"");
    
    //Declaração de variavel e o tipo dela;
    int i, n, res=1;
    
    //Pedir número ao usuário e guardar na variavel
    printf("Inisira o número que deseja calcular o fatorial:\n");
    scanf("%d", &n);
    
    //Apagar informações
    system ("clear");
    
    //Calculo
    for (i=1; i<=n; i++){
        res= res*i;
    }
    
    //Aparecer resultado na tela
     printf ("O fatorial é : %d", res);
     
    //finalizar programação
    return 0;
}
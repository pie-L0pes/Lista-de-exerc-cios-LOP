#include <stdlib.h>
#include<locale.h>
#include <stdio.h>
int main(){
    setlocale(LC_ALL,"");
    
    //Declaração de variavel e o tipo dela;
    int i, res=0;
    
    //Passar por todos os 200 números
    for (i=1; i<=200; i++){
        //Se número é par, somar ele
        if(i%2==0){
            res= res+i;
        }
    }
    
    //Aparecer resultado na tela
     printf ("A soma dos primeiros 100 números pares é : %d", res);
     
    //finalizar programação
    return 0;
}
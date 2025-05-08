#include <stdlib.h>
#include<locale.h>
#include <stdio.h>
int main(){
    setlocale(LC_ALL,"");
    
    //Declaração de variavel e o tipo dela;
    float n[2], res;
    int operacao, opcao2, i;

    
    //As funções dentro do código vai repitir até que o usuário deseja sair
    do{
    
    //Mostrar opções e ler a opção escolhida
    printf("Escolha uma operaçao:\n");
    printf("1-Soma\n");
    printf("2-Subtração\n");
    printf("3- Sair\n");
    printf("Insira o numero correspodente a operacao que deseja realizar:\n");
    scanf("%d", &operacao);
    system ("clear");
    
    //Pedir números da operação e guarda-los na váriavel até acabar seu espaço se ele escolheu não sair
    if(operacao!=3){
    for(i=0;i<=1;i++){
	    printf("Insira o numero %d:\n", i+1);
	    scanf("%f" , &n[i]);
	    system ("clear");
	    }
    }
    
    //Se ele escolheu sair aparecerá essa mensagem e o programa irá encerrar
    else{
        	printf("Volte sempre!");
        	return 0;
    }
    
    //Operação que o programa vai realizar, mostrar de acordo com a opção escolhida e mostrar se a opção escolhida não existe
	switch(operacao) {
	    
	    case 1:
	    res = n[0]+n[1];
	    printf("O resultado é %.2f\n", res);
	    break;
	    
	    case 2:
		res = n[0]-n[1];
		printf("O resultado e %.2f\n", res);
		break;
		
		
		default:
		printf ("A opção que você escolheu é invalida!\n");
		break;
	}
	
	//Perguntar se deseja continuar
	printf("Você deseja continuar?\n");
	printf("1-Sim\n");
	printf("2-Não\n");
	printf("Insiar o número correspondente ao que deseja:\n");
	scanf("%d", &opcao2);
	getchar ();
	system ("clear");
		
		
	//Se ele desejar sair apareça a sguinte mensagem:
	if(opcao2=2){
	    printf("Volte sempre!");
	}
	
    }while(opcao2!=2);
		
    //Finalizar código
    return 0;
}
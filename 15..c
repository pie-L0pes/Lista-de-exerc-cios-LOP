#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
	int idade;
	float nota;
} Aluno;

int main() {
    Aluno aluno1 = {"Tamires", 16, 9};
    
    printf("nome: %s\n", aluno1.nome);
    printf("idade: %d\n", aluno1.idade);
    printf("nota: %.2f\n", aluno1.nota);
    
 return 0;
}
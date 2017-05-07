#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clientes.h"
//#include "fCliente.h"

#define MAX 100

int main(){

	int op;

	Cliente cliente[MAX];


	printf(" ------------- AGENDA DE COMPROMISSOS ------------- \n\n");

	printf("  Nos diga o que deseja fazer!\n\n");
	printf("\t 1 - Cadastrar clientes. \n");
	printf("\t 2 - Cadastrar compromissos. \n\n");
	printf("\t 0 - Sair. \n");
	printf("Opção: ");
	scanf("%d",&op);


	if (op == 1){

		system("clear");
		printf("\n\n ------------- CADASTRO DE CLIENTES ------------- \n\n");

		printf("\t 1 - Cadastrar um novo cliente \n");
		printf("\t 2 - Pesquisar um cliente \n");
		printf("\t 3 - Listar clientes cadastrados \n");
		printf("\t 4 - Ordenar clientes \n");


	} else if (op == 2){

		system("clear");
		printf("\n\n ------------- CADASTRO COMPROMISSO ------------- \n\n");

		printf("\t 1 - Cadastrar um novo compromisso \n");
		printf("\t 2 - Editar um compromisso \n");
		printf("\t 3 - Excluir um compromisso \n");
		printf("\t 4 - Pesquisar um compromisso \n");
        printf("\t 4 - Listar todos os compromissos \n");
		
	} else {

		system("exit");
	}

	return 0;    
}

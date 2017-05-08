#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "clientes.h"
//#include "fCliente.h"

#define MAX 100

int main(){

	int op;

	int opCliente, opCompromisso;

	//Cliente cliente[MAX];



	printf(" ------------- AGENDA DE COMPROMISSOS ------------- \n\n");

	printf("  Nos diga o que deseja fazer!\n\n");
	printf("\t 1 - Cadastrar clientes. \n");
	printf("\t 2 - Cadastrar compromissos. \n\n");
	printf("\t 0 - Sair. \n");
	printf("Opção: ");
	scanf("%d",&op);


	if (op == 1){

		//LIMPEZA DA TELA
		system("cls");
		//system("clear");

		printf("\n\n ------------- CADASTRO DE CLIENTES ------------- \n\n");

		printf("\t 1 - Cadastrar um novo cliente \n");
		printf("\t 2 - Pesquisar um cliente \n");
		printf("\t 3 - Listar clientes cadastrados \n");
		printf("\t 4 - Ordenar clientes \n");
		printf("Opção: ");
		scanf("%d",&opCliente);

		switch(opCliente){

			case 1:
				printf("Cadastrando Cliente");
				break;
			case 2:
				printf("Pesquisando Cliente");
				break;
			case 3:
				printf("listando Cliente");
				break;
			case 4:
				printf("Ordenando Cliente");
				break;
			default:
				printf("Informe uma o~ção valida.");


		}

	} else if (op == 2){

		//LIMPEZA DA TELA
		system("cls");
		//system("clear");

		printf("\n\n ------------- CADASTRO COMPROMISSO ------------- \n\n");

		printf("\t 1 - Cadastrar um novo compromisso \n");
		printf("\t 2 - Editar um compromisso \n");
		printf("\t 3 - Excluir um compromisso \n");
		printf("\t 4 - Pesquisar um compromisso \n");
        printf("\t 5 - Listar todos os compromissos \n");
        printf("Opção: ");
		scanf("%d",&opCompromisso);

		switch(opCompromisso){

			case 1:
				printf("Cadastrando Compromisso");
				break;
			case 2:
				printf("Editando Compromisso");
				break;
			case 3:
				printf("Excluindo Compromisso");
				break;
			case 4:
				printf("Pesquisando Compromisso");
				break;
			case 5:
				printf("Listando todos os Compromissos");
				break;
			default:
				printf("Informe uma o~ção valida.");


		}
		
	} else {

		//system("exit");
	}

	return 0;    
}

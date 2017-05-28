#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clientes.h"

int main(){	

	int op, opCliente, opCompromisso;
	Cliente pessoa[MAX];

	do{
		printf(" ------------- AGENDA DE COMPROMISSOS ------------- \n\n");

		printf("  Nos diga o que deseja fazer!\n\n");
		printf("\t 1 - Cadastrar clientes. \n");
		printf("\t 2 - Cadastrar compromissos. \n\n");
		printf("\t 0 - Sair. \n");
		printf("Opção: ");
		scanf("%d",&op);
		system("clear");
		switch(op){

			// Caso seja 1 vai entra no menu de cadastro de clientes
			case 1:
			  do{
				system("clear");
				printf("\n\n ------------- CADASTRO DE CLIENTES ------------- \n\n");
				printf("\t 1 - Cadastrar um novo cliente \n");
				printf("\t 2 - Pesquisar um cliente \n");
				printf("\t 3 - Listar clientes cadastrados \n");
				printf("\t 4 - Ordenar clientes \n");
				printf("\t 9 - Voltar \n");
				printf("Opção: ");
				scanf("%d",&opCliente);

				system("clear");
				switch(opCliente){

					case 1:
						criaCliente(pessoa);
						cadastraCliente(pessoa);
						break;
					case 2:
						pesquisaCliente(pessoa);
						break;
					case 3:
						printf("listando Cliente");
						break;
					case 4:
						printf("Ordenando Cliente");
						break;
					case 9:
						printf("\t********************************\n");
						printf("\t\t   Menu Inicial\n");
						printf("\t********************************\n\n");
						break;
					default:
						printf("Informe uma opção valida.");
						break;
					}
			   }while(opCliente!=9);

			   break;
				
			// Fim do menu cadastro de clientes

			// Caso seja 2 ira para o menu de Compromissos
			case 2:
			  do{
				system("clear");				
				printf("\n\n ------------- CADASTRO COMPROMISSO ------------- \n\n");
				printf("\t 1 - Cadastrar um novo compromisso \n");
				printf("\t 2 - Editar um compromisso \n");
				printf("\t 3 - Excluir um compromisso \n");
				printf("\t 4 - Pesquisar um compromisso \n");
        		printf("\t 5 - Listar todos os compromissos \n");
        		printf("\t 9 - Voltar \n");
       			printf("Opção: ");
				scanf("%d",&opCompromisso);

				system("clear");
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
					case 9:
						printf("\t********************************\n");
						printf("\t\t   Menu Inicial\n");
						printf("\t********************************\n\n");
						break;
					default:
						printf("Informe uma opção valida.");
						break;
					}				
			  }while(opCompromisso!=9);

			  break;
			// fim do menu de compromissos
			case 0:
				exit(1);
				break;
			default:
				printf("******************\n");
				printf("Opção invalida!");
				printf("\n******************\n\n");
				break;

		}
	}while(op != 0);

	return 0;
}
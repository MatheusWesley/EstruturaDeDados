#include <stdio.h>
#include <stdlib.h>



// Informações de um cliente
typedef struct{

	int topo;
	char nome[30];
	int telefone;
	
}Cliente;


// Funções do Cliente


void criaCliente (Cliente *cliente);
void cadastraCliente (Cliente *cliente);
void pesquisaCliente (Cliente *cliente);
void lista (Cliente *cliente);


// Ordenação
void ordenaCliente (Cliente *cliente);
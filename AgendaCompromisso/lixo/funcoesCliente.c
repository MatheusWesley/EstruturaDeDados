#include <stdio.h>
#include <stdlib.h>
#include "clientes.h"

#define MAX 2

void criaCliente(Cliente *pessoa){

    pessoa->topo = -1;
}


void cadastraCliente(Cliente *pessoa){

	printf("Informe o nome: ");
	gets(pessoa->nome);
	fflush(stdin);
	printf("\nInforme o Telefone com 8 digitos: 123");
	scanf("%d",&pessoa->tel);
	fflush(stdin);
}
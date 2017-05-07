#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "clientes.h"

#define MAX 30

void criaCliente (Cliente *cliente){
    p->topo = -1;
}


void cadastaCliente(Cliente *cliente){
    
        printf("INFORME O NOME: ");
        gets(cliente->nome);
        fflush(stdin);
        printf("INFORME O TELEFONE: ");
        scanf("%d",&cliente->telefone);
        p->topo++;
}
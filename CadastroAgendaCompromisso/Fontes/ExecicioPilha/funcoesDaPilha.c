#include <stdio.h>
#include <stdlib.h>
#include "estrutura.h"
#define MAX 2

void criaPilha(Pilha *p){
    p->topo = -1;
}

void empilhar(Pilha *p){

    int ct;

    if (p->topo == MAX){
          printf("PILHA CHEIA\n");
      }
      else {
            //for(ct=0;ct<=MAX;ct++){
            printf("INFORME O NOME: ");
            gets(p->nome);
            fflush(stdin);
            printf("INFORME O TELEFONE: ");
            scanf("%d",&p->tel);
            p->topo++;
            //}
      }
}

void desempilhar(Pilha *p){

    if (p->topo== -1){
           printf("PILHA VAZIA\n");
                }
    else {
           printf("REMOVENDO DADOS...\n");
           p->topo--;
         }
}


void listar(Pilha *p){
    int cont;
    if (p->topo== -1){
           printf("PILHA VAZIA\n");
                }
    else {

        printf("------- LISTA -------\n\n");
            for(cont=0;cont<=MAX;cont++){
                printf("Nome: %s\n", p[cont].nome);
                printf("Telefone %d\n", p[cont].tel);
            }


        //    printf("Nome: %s\n", p->nome);
        //    printf("Telefone %d\n", p->tel);
    }
    system("pause");
}

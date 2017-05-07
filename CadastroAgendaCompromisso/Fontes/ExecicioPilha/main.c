#include <stdio.h>
#include <stdlib.h>
#include "estrutura.h"
{
    Pilha p[MAX];
    int i, op;
    criaPilha(&p);

    do{
        system("cls");
        printf("------------- MENU -------------\n\n\n");
        printf("1 - EMPILHAR\n");
        printf("2 - DESEMPILHAR\n");
        printf("3 - LISTAR\n");
        printf("4 - LISTAR TOPO\n");
        printf("5 - SAIR\n\n");
        printf("-> Escolha uma opcao: ");
        scanf("%d",&op);
        fflush(stdin);
        switch(op){

            case 1:
                empilhar(&p);
                break;
            case 2:
                desempilhar(&p);
                break;
            case 3:
                listar(&p);
                break;
           // case 4:
            //    listarTopo(&p);
            //    break;
            default :
                if (op != 5){
                printf("Informe uma Opcao valida!");
                system("pause");
                }
        }
    } while (op != 5);
    return 0;
}

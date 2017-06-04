#include <stdio.h>
#include <stdlib.h>


typedef struct Dados
{

	char nome[100];
	int tel;
	
}Cliente;


// Função de Limpeza de Buffer
void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}



int main()
{
	
	int i;
	Cliente pessoa[100];

	for (i=0;i<2; ++i){


		printf("Nome: ");
		fgets(pessoa[i].nome,100,stdin);
		printf("Telefone: ");
		scanf("%d",&pessoa[i].tel);
		flush_in();
	}

		flush_in();
		printf("\t Nome  \t Telefone\n");
		printf("------------------------------------------\n");

	for (i=0;i<2;i++){
		
		printf("\n\t %s  \t\t",pessoa[i].nome);
		printf("%d\n",pessoa[i].tel );
	}
	

	return 0;
}
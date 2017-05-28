

#define MAX 100

// Definindo a estrutura de um cliente. Quais seus atributos
typedef struct Dados{

	int topo;
	char nome[MAX];
	int tel;
	
}Cliente;

// Função de Limpeza de Buffer
void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

//---------------------------------------------------------------


// As funções que podem ser feitas com esses atributos

void criaCliente(Cliente *pessoa){

    pessoa->topo = -1;
}

// Cadastro de Clientes
void cadastraCliente(Cliente *pessoa){

	int n;
	flush_in();
	printf("Informe o nome: ");
	fgets(pessoa->nome,100,stdin);
	printf("Informe o Telefone com 8 digitos: ");
	scanf("%d",&pessoa->tel);

	//printf("%s \n",pessoa->nome);
	//printf("%d \n",pessoa->tel);
	flush_in();
	//printf("\n\nDigite 0 e dê enter para voltar...");
	//scanf("%d",&n);
}
// Pesquisa de Clientes
void pesquisaCliente(Cliente *pessoa){

	char compNome[MAX];
	int compTel, ind;

	flush_in();
	printf("Deseja procurar por nome(1) ou telefone(2)? ");
	scanf("%d",&ind);

	switch(ind){

		case 1:
			flush_in();
			printf("Digite o nome que procura: ");
			fgets(compNome,100,stdin);
			if (strcasecmp(compNome,pessoa->nome)==0){
		
				printf("Nome: %s", pessoa->nome);
				printf("Telefone: %d \n", pessoa->tel);
				printf("Sair...");
				flush_in();
		
			}else{

				printf("Cliente não econtrado!\n");
				printf("Sair...");
				flush_in();
			}

			break;
		case 2:

			printf("Digite o Telefone que procura: ");
			scanf("%d",&compTel);
			if (compTel==pessoa->tel){
		
				printf("Nome: %s", pessoa->nome);
				printf("Telefone: %d \n", pessoa->tel);
				printf("Sair...");
				flush_in();
		
			}else{

				printf("Cliente não econtrado!\n");
				printf("Sair...");
				flush_in();
			}
			flush_in();
			break;
	}

}

/*

void listarCliente(Cliente *pessoa);
void ordenarCliente(Cliente *pessoa);

*/



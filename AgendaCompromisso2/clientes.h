

#define MAX 100

// Definindo a estrutura de um cliente. Quais seus atributos
typedef struct Dados{

	int ponte;
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

    pessoa->ponte = -1;
}

// Cadastro de Clientes
void cadastraCliente(Cliente *pessoa){

	int qtdc;
	printf("Quantos clientes deseja cadastrar? ");
	scanf("%d", &qtdc);
	flush_in();

	for (pessoa->ponte=0;pessoa->ponte<qtdc;pessoa->ponte++){

		printf("Nome: ");
		fgets(pessoa[pessoa->ponte].nome,100,stdin);
		printf("Telefone: ");
		scanf("%d",&pessoa[pessoa->ponte].tel);
		flush_in();
	}

}
// Pesquisa de Clientes
void pesquisaCliente(Cliente *pessoa){

	char compNome[MAX];
	int compTel, ind;
	int i=0;

	flush_in();
	printf("Deseja procurar por nome (1) ou telefone (2)?\n = ");
	scanf("%d",&ind);

	if (ind == 1){

			flush_in();
			printf("Digite o nome que procura: ");
			fgets(compNome,100,stdin);


			while((strcasecmp(compNome,pessoa[i].nome)==0) && EOF){
		
			printf("Nome: %s", pessoa[i].nome);
			printf("Telefone: %d \n", pessoa[i].tel);
			printf("Sair...");
			flush_in();
			i++;				
			}

	}else if (ind == 2){


			printf("Digite o Telefone que procura: ");
			scanf("%d",&compTel);
			if (compTel==pessoa->tel){
		
				printf("Nome: %s", pessoa->nome);
				printf("Telefone: %d \n", pessoa->tel);
				printf("Sair...");
				flush_in();		
			}

	}

}

void listarCliente(Cliente *pessoa){

		int i=0;	

		flush_in();
		printf("\t Nome  \t Telefone\n");
		printf("------------------------------------------\n");	

		while((i<pessoa->ponte) && (EOF)){
			
			printf("\n\t %s  \t\t",pessoa[i].nome);
			printf("%d\n",pessoa[i].tel );
			printf("------------------------------------------\n");
			i++;
			flush_in();
		}



}

/*


void ordenarCliente(Cliente *pessoa);

*/



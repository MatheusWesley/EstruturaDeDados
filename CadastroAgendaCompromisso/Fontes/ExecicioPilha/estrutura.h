// Aqui é uma estrutura implementada para pilhas
// AS FUNÇOES BASICAS DE UMA PIHLA


#define MAX 2

// CRIANDO UMA ESTRUTURA DE DADOS DE UMA PILHA
typedef struct Dados {
    int topo;
    char nome[30];
    int tel;
}Pilha;


// CRIANDO AS FUNÇÕES QUE ESSA PILHA VAI TER
void criaPilha(Pilha *p);
void empilhar(Pilha *p);
void desempilhar(Pilha *p);
void listar(Pilha *p);
void listarTopo(Pilha *p);

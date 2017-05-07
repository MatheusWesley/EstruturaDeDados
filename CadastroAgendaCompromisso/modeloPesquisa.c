#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define LIM 3

int PesquisaS(char *chave, char *vetor[]){
for(int i = 0; i < LIM; i++)
if(!strcmp(chave, vetor[i])) return (i);
return(-1);
}

int main(int argc, char **argv){
char *vetor[LIM];
for(int i = 0; i < LIM; i++){
vetor[i] = new char(80);
cout << "Entre com o nome[" << i << "]: ";
cin.getline(vetor[i], 80);
}
if (PesquisaS("Teste", vetor) >= 0)
cout << "\nEncontrou" << endl;
else
cout << "\nNao encontrou" << endl;
return (EXIT_SUCCESS);
}
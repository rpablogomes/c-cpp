#include <cstdlib>
#include <math.h>
#include <iostream>
#include <fstream>

#define TAM 6

/*
 * conteúdo do arquivo vetores:

1 3
5 8
9 4
7 6
4 2
1 2

 */

using namespace std;

int main(int argc, char** argv) {
    
    float elemento, primeiroElemento, segundoElemento, vet[TAM], vetDois[TAM];
    int contador = 0;
    
    ifstream arquivo("vetores.txt");
   
    if (!arquivo.is_open()) {
        cout << "\nErro: Arquivo não encontrado. \n";
        return 1;    };
    
    cout << "Digite um valor: ";
    
    cin >> elemento;
    
    arquivo >> primeiroElemento;
    arquivo >> segundoElemento;

    while (contador < TAM){

        vet[contador] = primeiroElemento + segundoElemento * elemento;
 
        contador++;

        arquivo >> primeiroElemento;
        arquivo >> segundoElemento;

    }

    for(int i = 0; i < TAM; i++){
        cout << vet[i] << endl;
    }
    
    return 0;
}

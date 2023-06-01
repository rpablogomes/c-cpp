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
    
    float primeiroElemento, segundoElemento, vet[TAM];
    int contador = 0;
    
    ifstream arquivo("vetores.txt");
   
    if (!arquivo.is_open()) {
        cout << "\nErro: Arquivo não encontrado. \n";
        return 1;
    };
   
    arquivo >> primeiroElemento;
    arquivo >> segundoElemento;


    while (contador < 6){
           
        vet[contador] = primeiroElemento + segundoElemento;
        contador++;

       
    arquivo >> primeiroElemento;
    arquivo >> segundoElemento;

    }

    for(int i = 0; i < TAM; i++){
        cout << vet[i] << endl;
    }
    
    return 0;
}

#include <cstdlib>
#include <stdio.h>

int main(int argc, char** argv) {
    char nome[30], sobrenome[50], nomeCompleto[80];
    int contadorPrimeiro = 0, contadorSegundo = 0;
    
    printf("Digite o nome: \n"); 
    scanf(" %s", nome);
    
    printf("Digite o sobrenome: \n"); 
    scanf(" %s", sobrenome);
    
    while(nome[contadorPrimeiro] != '\0'){
        nomeCompleto[contadorPrimeiro] = nome[contadorPrimeiro];
        contadorPrimeiro++;
    };
    
    nomeCompleto[contadorPrimeiro] = ' ';
        contadorPrimeiro = contadorPrimeiro + 1;

    
    while(sobrenome[contadorSegundo] != '\0'){
        nomeCompleto[contadorPrimeiro] = sobrenome[contadorSegundo];
        contadorPrimeiro++;
        contadorSegundo++;
    };
    
    nomeCompleto[contadorPrimeiro] = '\0';
    
    printf("%s", nomeCompleto);
    
    return 0;
}

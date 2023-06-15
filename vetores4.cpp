#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
    char nomeCompleto[40], nomeContido[10];
    int i = 0, j = 0;

    printf("Escreva o nome completo: \n");
    scanf(" %s", nomeCompleto);

    printf("Digite o nome paa verificar: \n");
    scanf(" %s", nomeContido);

    while (nomeCompleto[i] != '\0') {
        if (nomeCompleto[i] == nomeContido[j]) {
            if (nomeContido[i] == '\0') {
                printf("O nome ESTÁ contido no nome completo");
            } else {
                j = 0;
            }
            j++;
        } else {
            printf("O nome NÃO ESTÁ contido no nome completo");
        }
        i++;
    }

    return 0;
}

#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
    int quantidade, contador = 1, i;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &quantidade);

    int vetor[quantidade];
    vetor[0] = rand() % quantidade;

    while (contador < quantidade) {
        int random = rand() % quantidade;

        for (i = 0; i < contador && vetor[i] != random; i++) {
            vetor[contador] = random;
        }
        if (i == contador) {
            vetor[i] = random;
            contador++;
        }

    }

    for (int i = 0; i < quantidade; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}

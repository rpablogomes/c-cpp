#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
    int quantidade, contador = 1, i, j;

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
    
  for (i = 1; i < quantidade; i++) {
   for (j = 0; j < quantidade - i; j++) {
     if (vetor[j] > vetor[j + 1]) {
       int aux = vetor[j];
       vetor[j] = vetor[j + 1];
       vetor[j + 1] = aux;
     }
   }
 }

    for (int i = 0; i < quantidade; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}

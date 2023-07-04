#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int bubbleSortCrescente(int quantidade, int aleatorio[]) {
    int contador = 0, aux;
    int crescente[quantidade];

    for (int i = 0; i < quantidade; i++) {
        crescente[i] = aleatorio[i];
    }

    for (int i = 1; i < quantidade; i++) {
        for (int j = 0; j < quantidade - i; j++) {
            contador += 2;
            if (crescente[j] > crescente[j + 1]) {
                contador += 4;
                aux = crescente[j];
                crescente[j] = crescente[j + 1];
                crescente[j + 1] = aux;
            }
        }
    }
    
    return contador;
}

int insertionCrescente(int quantidade, int aleatorio[]) {
    int j, aux;
    int crescente[quantidade];

    for (int i = 0; i < quantidade; i++) {
        crescente[i] = aleatorio[i];
    }

    for (int i = 1; i < quantidade - 1; i++) {
        aux = crescente[i];
        j = i - 1;
        while (j >= 0 && aux < crescente[j]) {
            crescente[j + 1] = crescente[j];
            j--;
        }

        crescente[j + 1] = aux;
        
    }
    for(int i=0; i < quantidade; i++){
                   printf("%d, ", crescente[i]);
        }
}

//int selectionCrescente(int quantidade, int aleatorio[quantidade], int contadorOperacoesSelectionCrescente) {
//    int i, j, min_idx;
//
//    for (i = 0; i < quantidade - 1; i++) {
//
//        min_idx = i;
//        for (j = i + 1; j < quantidade; j++) {
//            if (aleatorio[j] < aleatorio[min_idx])
//                min_idx = j;
//        }
//
//        if (min_idx != i)
//            swap(aleatorio[min_idx], aleatorio[i]);
//    }
//}
//
//int bubbleSortDecrescente(int quantidade, int aleatorio[quantidade], int contadorOperacoesBubbleSortCrescente){
//    
//}
//
//int insertionDecrescente(int quantidade, int aleatorio[quantidade], int contadorOperacoesInsertionCrescente){
//    
//}
//
//int bubbleSortDecrescente(int quantidade, int aleatorio[quantidade], int contadorOperacoesBubbleSortCrescente){
//    
//}

int main(int argc, char** argv) {
    int quantidade, contador = 1, i, j;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &quantidade);

    int aleatorio[quantidade];
    aleatorio[0] = rand() % quantidade;

    int crescente[quantidade];
    int contadorOperacoesBubbleSortCrescente;
    int contadorOperacoesInsertionCrescente;
    int contadorOperacoesSelectionCrescente;

    int decrescente[quantidade];
    int contadorOperacoesBubbleSortDecrescente;
    int contadorOperacoesInsertionDecrescente;
    int contadorOperacoesSelectionDecrescente;

    while (contador < quantidade) {
        int random = rand() % quantidade;

        for (i = 0; i < contador && aleatorio[i] != random; i++) {
            aleatorio[contador] = random;
        }
        if (i == contador) {
            aleatorio[i] = random;
            contador++;
        }
    }

    contadorOperacoesBubbleSortCrescente = insertionCrescente(quantidade, aleatorio);

    //    for (int i = 0; i < quantidade; i++) {
    //        printf("%d\n", aleatorio[i]);
    //    }

    printf("%d\n", contadorOperacoesBubbleSortCrescente);

    return 0;
}


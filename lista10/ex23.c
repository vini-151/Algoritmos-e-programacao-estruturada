#include <stdio.h>

int main(){

    int vetorA[5];
    int vetorB[5];
    int prod;
    int prodSom = 0;

    for (int i = 0; i < 5; i++){
        printf("Insira o valor para posicao %i vetor A\n", i);
        scanf("%i", &vetorA[i]);
        printf("Insira o valor para posicao %i vetor B\n", i);
        scanf("%i", &vetorB[i]);
    }

    for (int i = 0; i < 5; i++){
        prod = vetorA[i] * vetorB[i];
        prodSom+= prod;
    }

    for (int i = 0; i < 5; i++){
        printf("posicao %i. vetor A: %i. Vetor B: %i\n", i, vetorA[i], vetorB[i]);
    }

    printf("Produto escalar: %i", prodSom);
    
    return 0;

}
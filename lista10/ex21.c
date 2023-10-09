#include <stdio.h>

int main(){
    int vetorA[10];
    int vetorB[10];
    int vetorC[10];

    for (int i = 0; i < 10; i++){
        printf("Insira o valor para posicao %i vetor A\n", i);
        scanf("%i", &vetorA[i]);
        printf("Insira o valor para posicao %i vetor B\n", i);
        scanf("%i", &vetorB[i]);
    }
    
    for (int i = 0; i < 10; i++){
        vetorC[i] = vetorA[i] - vetorB[i];
        printf("%i\n", vetorC[i]);
    }
    
    return 0;

}
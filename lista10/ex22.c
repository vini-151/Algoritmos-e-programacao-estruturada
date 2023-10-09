#include <stdio.h>

int main(){
    int vetorA[10];
    int vetorB[10];
    int vetorC[20];

    for (int i = 0; i < 10; i++){
        printf("Insira o valor para posicao %i vetor A\n", i);
        scanf("%i", &vetorA[i]);
        printf("Insira o valor para posicao %i vetor B\n", i);
        scanf("%i", &vetorB[i]);
    }
    
    for (int i = 0; i <= 20; i+= 2){
        for (int j = 0; i < 10; i++){
            vetorC[i] = vetorA[j];
        }
    }

    for (int i = 1; i <= 19; i+= 2){
        for (int j = 0; i < 10; i++){
            vetorC[i] = vetorB[j];
        }
    }
    
    for (int i = 0; i < 20; i++){
        printf("%i\n", vetorC[i]);
    }
    
    return 0;

}
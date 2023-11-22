#include <stdio.h>

int main(){
    float vetor[10];

    for (int i = 0; i < 10; i++){
        vetor[i] = i * i;
    }

    for (int i = 0; i < 10; i++){
        printf("Endereco de memoria da posicao %i: %i\n", i, &vetor[i]);
    }

    return 0;
    
}
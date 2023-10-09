#include <stdio.h>

#define TAM 50

int main(){

    int vetor[TAM];
    int res;

    for (int i = 0; i < TAM; i++){
        printf("Insira valor para posicao %i\n", i);
        scanf("%i", &vetor[i]);
    }

    for (int i = 0; i < TAM; i++){
        res = (vetor[i] + 5 * vetor[i]) % (vetor[i] + 1);
        printf("%i\n", res);
    }
    
    return 0;
    
}
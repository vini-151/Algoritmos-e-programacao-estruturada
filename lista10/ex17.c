#include <stdio.h>

int main(){
    int vetor[10];

    for (int i = 0; i < 10; i++){
        printf("Insira o valor para a posicao %i\n", i);
        scanf("%i", &vetor[i]);
    }

    for (int i = 0; i < 10; i++){
        if (vetor[i] < 0){
            vetor[i] = 0;
        }
        printf("%i\n", vetor[i]);
    }
    
    return 0;
    
}
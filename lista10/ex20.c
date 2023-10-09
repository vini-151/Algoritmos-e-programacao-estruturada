#include <stdio.h>

int main (){
    int vetor[10];
    int vetorImpar[10];

    for (int i = 0; i < 10; i++){
        printf("Insira valor para posicao %i\n", i);
        scanf("%i", &vetor[i]);
        if (vetor[i] % 2 == 1){
            vetorImpar[i] = vetor[i];
        }else if (vetor[i % 2 ==0]){
            vetorImpar[i] = 0;
        }
              
    }

    for (int i = 0; i < 10; i++){
        printf("Posicao %i. para vetor 1: %i. Para vetor 2: %i\n" , i, vetor[i], vetorImpar[i]);
    }

    return 0;    
    
}
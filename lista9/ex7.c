#include <stdio.h>

int main (){
    
    int vetor[10] = {10,1,2,3,4,5,6,7,8,9};
    int maiorVetor = 0;
    int posicao = 0;

    for (int i = 0; i < 10; i++){
        if (vetor[i] > maiorVetor){
            maiorVetor = vetor[i];
            posicao = i;
        }
        
    }

    printf("Maior Numero: %i esta na posicao: %i", maiorVetor, posicao);
    

}
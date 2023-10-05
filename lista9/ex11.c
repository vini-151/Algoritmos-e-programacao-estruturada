#include <stdio.h>

int main(){

    float vetor[10] = {-3,-2,-1,0,1,2,3,4,5,6};
    int contNeg = 0;
    float somaPos = 0;

    for (int i = 0; i < 10; i++){
        if (vetor[i] < 0){
            contNeg++;
        }
        if (vetor[i] > 0){
            somaPos+= vetor[i];
        }
    }
    
    printf("A quantidade de numeros negativos e de: %i\n A soma dos valores positivos nesse vetor e de: %.2f", contNeg, somaPos);

}
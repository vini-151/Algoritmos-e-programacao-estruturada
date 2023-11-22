#include <stdio.h>
#include <stdlib.h>

int main(){
    //usando malloc para reservar espaço para um vetor

    int *vetor;

    vetor = (int*)malloc(5 * sizeof(int));
    if (vetor == NULL){
        printf("Sem memoria.\n");
        return 1;
    }
    
    for (int i = 0; i < 5; i++){
        vetor[i] = i + 1;
    }
    for (int i = 0; i < 5; i++){
        printf("\n%d", vetor[i]);
    }
    
    free(vetor);

    return 0;


}
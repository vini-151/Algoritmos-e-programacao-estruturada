#include <stdio.h>
int main (){

    int vetor[10];

    for (int i = 0; i < 10; i++){
        printf("Insira um valor para a posicao %i\n", i);
        scanf("%i", &vetor[i]);
    }

    for (int i = 0; i < 9; i++){
        for (int a = i+1; a < 10; a++){
            if (vetor[i] == vetor[a]){
                printf("O numero %i aparece nas posicoes %i e %i\n", vetor[i], i, a);
            }
        }
    }
    
}   

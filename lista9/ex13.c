#include <stdio.h>

int main(){
    int vetor[5];
    int menorNum = 0;
    int maiorNum = 0;
    int menorPos, maiorPos;

    printf("Insira o valor da posicao 0\n");
    scanf("%i", &vetor[0]);
    menorNum = vetor[0];
    for (int i = 1; i < 5; i++){
        printf("Insira o valor da posicao %i\n", i);
        scanf("%i", &vetor[i]);
        if (vetor[i] > maiorNum){
            maiorNum = vetor[i];
            maiorPos = i;
        }

        if (vetor[i] < menorNum){
            menorNum = vetor[i];
            menorPos = i;
        }
    }

    printf("Maior numero: %i na posicao %i\n", maiorNum, maiorPos);
    printf("Menor numero: %i, na posicao: %i", menorNum, menorPos);
    
}
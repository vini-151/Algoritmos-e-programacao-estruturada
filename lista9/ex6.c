#include <stdio.h>

int main (){
    int vetor[10];
    int maiorNumero = 0;
    int menorNumero = 0;

    for (int i = 0; i < 10; i++){
        printf("Insira o valor para a posicao %i\n", i);
        scanf("%i", &vetor[i]);
    }
    menorNumero = vetor[0];
    for (int i = 0; i < 10; i++){
        if (vetor[i] > maiorNumero){
            maiorNumero = vetor[i];
        }

        if (vetor[i] < menorNumero){
            menorNumero = vetor[i];
        }        
    }
    
    printf("Maior numero: %i\n", maiorNumero);
    printf("Menor numero: %i", menorNumero);


}
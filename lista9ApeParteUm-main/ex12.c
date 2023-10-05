#include <stdio.h>

int main(){
    int vetor[5];
    int maiorNum = 0;
    int menorNum = 0;
    float somatoria = 0;
    float media = 0;

    printf("Insira o valor para a posicao 0\n");
    scanf("%i", &vetor[0]);
    menorNum = vetor[0];
    if (vetor[0] > maiorNum){
        maiorNum = vetor[0];
    }
    
    for (int i = 1; i < 5; i++){
        printf("Insira o valor para a posicao %i\n", i);
        scanf("%i", &vetor[i]);

        if (vetor[i] > maiorNum){
            maiorNum = vetor[i];
        }

        if (vetor[i] < menorNum){
            menorNum = vetor[i];
        }
    }

    printf("===Valores Inseirdos===\n");
    for (int i = 0; i < 5; i++){
        printf("%i, """, vetor[i]);
        somatoria+= vetor[i];
    }
    
    media = somatoria / 5;

    printf("\nO maior numero inserido: %i\n", maiorNum);
    printf("O menor numero inserido: %i", menorNum);
    printf("\nA media dos valores e de: %.2f", media);

}
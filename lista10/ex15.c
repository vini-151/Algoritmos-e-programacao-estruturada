#include <stdio.h>
int main (){

    int vetor[10];

    for (int i = 0; i < 20; i++){
        printf("Insira um valor para a posicao %i\n", i);
        scanf("%i", &vetor[i]);
    }

    for (int i = 0; i < 19; i++){
        for (int a = i+1; a < 20; a++){
            if (vetor[i] == vetor[a]){
                vetor[i] = 0;
                vetor[a] = 0;
            }
        }
    }
    printf("Removendo elementos repitidos...\n");
    for (int i = 0; i < 10; i++){
        if (vetor[i] != 0){
            printf("%i\n", vetor[i]);
        } 
    } 
}   

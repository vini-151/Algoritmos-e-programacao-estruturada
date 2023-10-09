#include <stdio.h>

int main(){
    
    int vetor[10];
    int x;

    printf("Insira o valor de x\n");
    scanf("%i", &x);

    for (int i = 0; i < 10; i++){
        printf("Insira o valor para a posicao %i\n", i);
        scanf("%i", &vetor[i]);
    }

    for (int i = 0; i < 10; i++){
        if (vetor[i] % x == 0){
            printf("%i\n", vetor[i]);
        }
    }
    
    return 0;

}
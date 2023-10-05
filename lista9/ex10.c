#include <stdio.h>

int main(){
    float notas[15];
    float somatoriaNotas = 0;
    float media;
    

    for (int i = 0; i < 15; i++){
        printf("Insira a nota do aluno %i\n", i+1);
        scanf("%f", &notas[i]);
        somatoriaNotas+=notas[i];
    }

    media = somatoriaNotas / 15;

    printf("A media geral e de: %.2f", media);
    
}
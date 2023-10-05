#include <stdio.h>

int main(){
    int vetor[8] = {0,1,2,3,4,5,6,7};
    int x, y, soma;

    printf("Insira um valor de X\n");
    scanf("%i", &x);
    fflush(stdin);
    printf("Insira o valor de Y\n");
    fflush(stdin);
    scanf("%i", &y);

    if ((x >= 0 && x <=8) && (y >= 0 && y <=8)){

        soma = vetor[x] + vetor[y];

        printf("A soma das posicoes x e y no vetor e igual a: %i", soma);    

    }else{
        printf("Valor incompativel\n");
    }
    return 0;   
}
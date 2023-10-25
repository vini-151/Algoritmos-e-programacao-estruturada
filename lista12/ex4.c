#include <stdio.h>

void somaMatriz(int n1[61][10]){
    for (int i = 0; i < 10; i++){
        int soma = 0;
        for (int j = 0; j < 60; j++){
            soma+= n1[j][i];
        }
            n1[60][i] = soma;
    }
    
}

int main(){
    int matriz [61][10];
    somaMatriz(matriz);

    return 0;
}
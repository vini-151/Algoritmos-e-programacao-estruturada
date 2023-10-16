#include <stdio.h>

int main(){

    //matrizes são vetores bidimensionais
    /* ao declarar uma matriz como      int matriz[2][3]     Estamos falando de uma matriz com 2 linhas e 3 colunas*/
    /*
            C    C    C        
         _________________
      L  |____|____|_____|
      L  |____|____|_____|

    */
    // Declarando matrizes 

    int matriz[2][2] = {{1,2},
                        {3,4}};
    
    //ou

    int matrizUm[2][2] = {1,2,
                         3, 4};
    // ou 

    int matrizDois[2][2] = {1,2,3,4};

    //criando uma matriz e recebendo valores para ela

    int matrizTres[2][3]; //2 linhas e 3 colunas

    //percorrendo as linhas
    for (int i = 0; i < 2; i++){
        //percorrendo colunas
        for (int j = 0; j < 3; j++){
            printf("Digite o valor para coluna %i linha %i\n", j, i);
            scanf("%i", &matrizTres[i][j]);
        }
        printf("\n");
    }
    // Imprimindo valores
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%i\t", matrizTres[i][j]);
        }
        printf("\n");
    }

    return 0;

}
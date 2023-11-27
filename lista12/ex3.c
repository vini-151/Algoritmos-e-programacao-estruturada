#include <stdio.h>

int trocas(int matrizA[10][10]){
    for (int i = 0; i < 10; i++){//linha 2 <-> linha 8
        int substituicao = matrizA[1][i];
        matrizA[1][i] = matrizA[7][i];
        matrizA[7][i] = substituicao;
    }

    for (int i = 0; i < 10; i++){//coluna 4 <=> coluna 10
        int substituicao = matrizA[i][3];
        matrizA[i][3] = matrizA[i][9];
        matrizA[i][9] = substituicao;
    }

    for (int i = 0; i < 10; i++){// diag principal <-> diag sec.
        int substituicao = matrizA[i][i];
        matrizA[i][i] = matrizA[i][9 - i];
        matrizA[i][9 - i] = substituicao;
    }

    for (int i = 0; i < 10; i++){//linha 5 <-> coluna 10
        int substituicao = matrizA[4][i];
        matrizA[4][i] = matrizA[i][9];
        matrizA[i][9] = substituicao;
    }
    
}


int main(){
    int matrizA[10][10];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("Digite o valor para coluna %i linha %i\n", j, i);
            scanf("%i", &matrizA[i][j]);
        }
        printf("\n");
    }


    trocas(matrizA);

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf(" %i ", matrizA[i][j]);
        }
        printf("\n");
    }
    
}
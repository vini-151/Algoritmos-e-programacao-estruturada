#include <stdio.h>

int main(){

    int matriz[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Endereco de memoria da linha %i coluna %i: %i\n", i, j, &matriz[i][j]);
        }
        printf("\n");
    }
    


    return 0;

}
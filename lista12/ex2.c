#include <stdio.h>
#define TAM 500

void locGratis(int n1[], int n2[]){
    for (int i = 0; i < TAM; i++){
        n2[i] = n1[i] / 15;
        printf("Cliente %i tem direito a %i locacoes gratuitas.\n", i+1, n2[i]);
    }
}

int main(){
    int vetorA[TAM];
    int vetorAGratis[TAM];
    locGratis(vetorA, vetorAGratis);

    return 0;

}
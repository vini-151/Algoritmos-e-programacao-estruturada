#include <stdio.h>
#include <stdlib.h>
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
    for (size_t i = 0; i < TAM; i++){
        vetorA[i] = rand() % 100 + 1; // numeros aleatorios entre 1 e 100
    }
    
    locGratis(vetorA, vetorAGratis);

    return 0;

}
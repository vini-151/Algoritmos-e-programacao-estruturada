#include <stdio.h>
#include <stdlib.h>

int main(){
    //gerando numeros aleatorios
    int a[10];
    for (int i = 0; i < 10; i++){
        a[i] = rand() % 11 + 1; // numeros aleatorios entre 1 e 11
        printf("%i, ", a[i]);
    }

    return 0;
    
}
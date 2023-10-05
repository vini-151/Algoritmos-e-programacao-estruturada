#include <stdio.h>

int main (){
    int vetor[10] = {0,1,2,3,4,5,6,7,8,9};
    int pares;
    int contPares = 0;

    for (int i = 0; i < 10; i++){
       pares = vetor[i] % 2;
       if (pares == 0){
        contPares++;
       }
    }

    printf("%i pares", contPares);
    
}
#include <stdio.h>
#define TAM 5
int main(){
    int vetNum[TAM] ={ 1, 2, 3, 4, 5};  
    int vetAltura[TAM] ={150, 160, 170, 180, 190 };
    int menor, maior, numMenor, numMaior;

    menor = vetAltura[0];
    numMenor = vetNum[0];
    maior = vetAltura[0];
    numMaior = vetNum[0];

    for (int i = 1; i < TAM; i++){
        if (vetAltura[i] > maior){
            maior = vetAltura[i];
            numMaior = vetNum[i];
        }else if (vetAltura[i] < menor){
           menor = vetAltura[i];
           numMenor = vetNum[i];
        }
        
    }
    
    printf("A Maior altura e: %i e pertence ao numero: %i\n", maior, numMaior);
    printf("A menor altura e: %i e pertence ao numero: %i\n", menor, numMenor);


}
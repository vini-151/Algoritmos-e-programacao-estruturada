#include <stdio.h>

int main(){
    int array[5];
    int *ponteiro;
    ponteiro = &array;

    for (int i = 0; i < 5; i++){
        printf("Insira o valor %i\n",i);
        scanf("%i", ponteiro + i);
    }
    printf("Imprimindo o dobro dos numeros inseridos: \n");
    for (int i = 0; i < 5; i++){
        printf("%i\n", *(ponteiro + i) * 2);
    }
    
    
}
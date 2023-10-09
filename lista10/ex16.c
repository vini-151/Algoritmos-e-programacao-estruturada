#include <stdio.h>

int main(){
    int vetor[5] = {0,1,2,3,4};
    int codigo;

    printf("Insira o codigo\n");
    scanf("%i", &codigo);
    if (codigo == 1){
        for (int i = 0; i < 5; i++){
            printf("%i\n", vetor[i]);
        }
     }else if (codigo == 2){
        for (int i = 5; i >= 0; i--){
            printf("%i\n", vetor[i]);
        }
    }else{
        printf("Codigo invalido");
    }
   return 0; 
}

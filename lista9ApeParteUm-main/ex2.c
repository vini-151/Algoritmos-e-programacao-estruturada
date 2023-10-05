#include <stdio.h>
int main(){
    int numeros[6];

    for (int i = 0; i < 6; i++){
        printf("Digite um numero\n");
        scanf("%i", &numeros[i]);
    }

    for (int i = 0; i < 6; i++){
        printf("%i\n", numeros[i]);
    }
    
    return 0;
}
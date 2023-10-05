#include <stdio.h>

int main (){
    int num, contador = 0;
    printf("Insira um numero:\n");
    scanf("%i", &num );
    while (contador <= num)
    {
        printf("%i\n", contador);
        contador++;
    }
    
}   

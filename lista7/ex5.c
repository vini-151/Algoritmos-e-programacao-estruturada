#include <stdio.h>

int main (){
    int contador = 0;
    for (int i = 2; i <= 100; i+=2)
    {
        contador += i;        
    }
    printf("A soma e de: %i", contador);
    return 0;
}   

#include <stdio.h>
#include <math.h>

int main (){
    int num, resultado;
    printf("insira o seu numero:\n");
    scanf("%i",&num);
    if (num >= 0 )
    {
        resultado = sqrt(num);
        printf("A raiz quadrada de %i e: %i", num, resultado);
    }else{
        resultado = num * num;
        printf("O numero %i ao quadrado e: %i", num, resultado);
    }
    
}

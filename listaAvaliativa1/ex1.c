#include <stdio.h>
#include <math.h>

int main (){
    float x;
    float res;

    printf("Insira o valor de x: \n");
    scanf("%f", &x);

    res = ((5 * x) + 3) / sqrt((pow(x,2)) - 16);

    printf("O resultado e: %.2f", res);
}

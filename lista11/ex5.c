#include <stdio.h>
#include <math.h>
#define pi 3.1414592

void volEsf(double n1){
    double n2 = (4/3) * (pi * pow(n1, 3));
    printf("o volume de uma esfera de raio %lf e de %lf", n1, n2);
}

int main(){
    double raio;
    printf("Insira o raio da esfera:\n");
    scanf("%lf", &raio);
    volEsf(raio);
}
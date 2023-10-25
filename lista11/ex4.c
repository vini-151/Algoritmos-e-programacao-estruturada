#include <stdio.h>
#include <math.h>
#define pi 3.1414592

void volumeCil(double n1, double n2){
    double n3 = pi * pow(n1, 2) * n2;
    printf("O volume do cilindro e de %.2lf", n3); 
}

int main(){
    double raio, altura;
    printf("Insira o raio e a altura\n");
    scanf("%lf %lf", &raio, &altura);
    volumeCil(raio, altura);

    return 0;
}
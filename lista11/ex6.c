#include <stdio.h>
#include <math.h>

void imc(double n1, double n2){
    double n3 = n1 / (pow(n2, 2));
    printf("O imc e de :%.2lf", n3);
}

int main(){
    double peso, altura;
    printf("Insira o peso e a altura:\n");
    scanf("%lf %lf", &peso, &altura);
    imc(peso, altura);
}
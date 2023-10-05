#include <stdio.h>
 int main(){
    float larg, comp, mult;
    printf("Calculadora de area de uma sala\n Insira a largura em metros:\n");
    scanf("%f", &larg);
    printf("Insira o comprimento em metros:\n");
    scanf("%f", &comp);

    mult = larg * comp;

    printf("A area da sala e de: %.2f metros quadrados", mult);
 }

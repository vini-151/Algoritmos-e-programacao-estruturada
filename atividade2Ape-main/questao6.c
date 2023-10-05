#include <stdio.h>

int main(){
    float raio, area;
    printf("Calculando area de um circulo\nInsira o raio do circulo:\n");
    scanf("%f", &raio);
    area = 3.14 * (raio * raio);
    printf("A area do circulo e de: %.2f", area);
}

#include <stdio.h>

int main(){
    float real, conv;
    float dolar = 4.99;
    printf("Conversor Real --> Dolar (Valor referente ao dia 15/08)\n");
    printf("Insira o valor em Reais a ser convertido:\n");
    scanf("%f", &real);

    conv = real / dolar;

    printf("O valor inserido em dolar e: %.2f", conv);
}

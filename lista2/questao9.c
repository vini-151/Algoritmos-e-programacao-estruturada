#include <stdio.h>

int main(){
    float precoFinal, CustoFabrica, percentDistr, impostos;
    printf("Calculando custo final de um carro\n Insira o custo de fabrica do carro\n");
    scanf("%f", &CustoFabrica);

    precoFinal = CustoFabrica + (CustoFabrica * 0.28) + (CustoFabrica * 0.45);

    printf("O custo final e de RS%.2f", precoFinal);
}

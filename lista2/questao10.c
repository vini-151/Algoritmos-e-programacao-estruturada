#include <stdio.h>

int main(){
    float salarioTotal, salarioFixo, precoDoCarroVendido, comissaoFixa, carrosVendidos;

    printf("Calculando salario final\nInsira seu salario Fixo\n ");
    scanf("%f", &salarioFixo);
    printf("Insira a quantidade de carros vendidos\n");
    scanf("%f", &carrosVendidos);
    printf("Insira o valor da comissao fixa\n");
    scanf("%f", &comissaoFixa);
    printf("Insira o valor de carro vendido\n");
    scanf("%f", &precoDoCarroVendido);
    salarioTotal = salarioFixo + (comissaoFixa * carrosVendidos) + ((precoDoCarroVendido * carrosVendidos)*0.05);
    printf("O seu salario total e de R$%.2f", salarioTotal);
}

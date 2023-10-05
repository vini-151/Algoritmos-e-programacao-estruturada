#include <stdio.h>

int main (){
    float custoProd, frete, custoAdi, custoTotal, valorVenda, percentLucro;
    printf("Calculadora de percentual de lucro\n");
    printf("Qual o custo do seu produto?\n");
    scanf("%f", &custoProd);
    printf("Qual o valor do frete?\n");
    scanf("%f", &frete);
    printf("Ha algum custo adicional?(se nao, prossiga com valor 0)\n");
    scanf("%f", &custoAdi);
    printf("Qual o valor de venda do seu produto?\n");
    scanf("%f", &valorVenda);

    custoTotal = custoProd + frete + custoAdi;
    percentLucro = ((valorVenda - custoTotal) / custoTotal) * 100;

    printf("O percentual de lucro do seu produto e de: %.2f por cento.", percentLucro);
}

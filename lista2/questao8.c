#include <stdio.h>

int main (){
    float salario, percentReajuste, novoSalario;
    printf("Calculando reajuste de salario\n Insira seu salario\n");
    scanf("%f", &salario);
    printf("insira o percentual de reajuste\n");
    scanf("%f", &percentReajuste);

    novoSalario = salario + (salario * (percentReajuste/ 100));

    printf("Seu novo salario e de: %.2f", novoSalario);
}

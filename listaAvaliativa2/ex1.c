/*
1.	Em uma fábrica de peças, o salário base dos operários é de R$ 600,00. Além do salário base,
 cada operário recebe um adicional de produtividade baseado na quantidade de peças fabricadas por mês.
  Este adicional é pago de acordo com o seguinte critério:

•	Se o número de peças for inferior ou igual a 50, não existe adicional de produtividade;
•	Se o número de peças for superior a 50 e inferior ou igual a 80, o adicional de
     produtividade será de R$ 0,50 para cada peça fabricada acima de 50;
•	Se o número de peças for superior a 80, o adicional de produtividade
     será de R$ 0,50 para cada peça fabricada acima de 50 até 80 e de R$ 0,75 por peça fabricada acima das 80.

Elabore um algoritmo para solicitar de cada funcionário a quantidade de peças fabricadas naquele mês
 e apresentar o seu salário. Isto deve se repetir para todos os funcionários da empresa,
 onde o usuário não sabe, inicialmente, quantos funcionários existem nesta empresa, ou seja,
  o número de funcionários não será fornecido. 
Sua solução proposta deverá possuir as lógicas bem definidas que sejam necessárias
 a implementação separada em sub-algoritmos específicos, devendo pelo menos os seguintes sub-algoritmos:

a)	validaQuantidade que validará o número de peças fabricadas por cada funcionário;
b)	calculaSalario que efetuará o cálculo do salário total para cada funcionário.
O resultado final será mostrado ao usuário por meio de um procedimento (mostraFinal).

*/

#include <stdio.h>

double validaQuantidade(double n1){
    printf("Insira a quantidade de pecas produzidas pelo funcionario.\n");
    scanf("%lf", &n1);
}

double calculaSalario(double pecas, double salario){
    printf("Quantidade de pecas inseridas: %.0lf", pecas);
}

int main(){
    int opcao;
    double salario;
    int usuarios = 1;
    double pecasProd;
    do{
        printf("Calculando salario do funcionario %i\n", usuarios);
        validaQuantidade(pecasProd);
        calculaSalario(pecasProd, salario);
        printf("\nDeseja acrescentar mais funcionarios? 0 - Sim. 1 - Nao.\n ", usuarios);
        scanf("%i", &opcao);
        if (opcao == 0){
            usuarios++;
        }
    } while (opcao == 0);
    

}
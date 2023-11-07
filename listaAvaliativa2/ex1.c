#include <stdio.h>

double validaQuantidade(double n1) {
    printf("Insira a quantidade de pecas produzidas: ");
    scanf("%lf", &n1);
    return n1;
}

double calculaSalario(double n1){
    double salario = 600;
    if (n1 <=50){
        n1 = salario;
        return n1;
    }else if (n1 > 50 && n1 <= 80){
        n1 = n1 - 50;
        salario = 600 + (n1 * 0.50);
        n1 = salario;
        return n1;
    }else{
        n1 = n1 - 80;
        salario = 615 + (n1 * 0.75); 
        n1 = salario;
        return n1;
    }
}

void mostraFinal(double n1){
    printf("Salario final: %.2lf\n", n1);
}

int main() {
    int opcao;
    double pecasProd;
    double salario;

    do {
        pecasProd = validaQuantidade(pecasProd);
        printf("%.0lf pecas produzidas\n", pecasProd);
        calculaSalario(pecasProd);
        salario = calculaSalario(pecasProd);
        mostraFinal(salario);
        printf("Digite 1 para continuar, digite 0 para finalizar: ");
        scanf("%d", &opcao);
    } while (opcao == 1);

    return 0;
}

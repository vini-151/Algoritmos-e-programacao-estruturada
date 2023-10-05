#include <stdio.h>

int main (){
    double salarioAtual, tempoDeServico, salarioFinal;

    printf("Insira o salario atual:\n");
    scanf("%lf", &salarioAtual);
    printf("Insira o tempo de sevico:\n");
    scanf("%lf", &tempoDeServico);

    if (salarioAtual <= 500 && tempoDeServico < 1){
        salarioFinal = salarioAtual + (salarioAtual * 0.25);
        printf ("Salario final sera %lf", salarioFinal);
    }else if(salarioAtual > 500 && salarioAtual <=1000 && tempoDeServico >= 1 && tempoDeServico <=3){
        salarioFinal = salarioAtual +(salarioAtual * 0.2) + 100;
        printf("Salario final sera %lf", salarioFinal);
    }else if(salarioAtual > 1000 && salarioAtual <= 1500 && tempoDeServico >= 4 && tempoDeServico <= 6){
        salarioFinal = salarioAtual + (salarioAtual * 0.15) + 200;
        printf("Salario final sera %lf", salarioFinal);
    }else if (salarioAtual >1500 && salarioAtual <= 2000 && tempoDeServico >=6 && tempoDeServico < 10){
        salarioFinal = salarioAtual + (salarioAtual * 0.1) + 300;
        printf("Salario final sera %lf", salarioFinal);
    }else if (salarioAtual >= 2000 && tempoDeServico >= 10 ){
       salarioFinal = salarioAtual + 500;
       printf("Salario final sera %lf", salarioFinal);
    }else{
        printf("Erro");
    }
}

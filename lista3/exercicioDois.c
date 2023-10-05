#include <stdio.h>

int main (){
    float seuSalario;
    int salarioMinimo = 1320;
    printf("Insira seu salario\n");
    scanf("%f", &seuSalario);
    if (seuSalario > salarioMinimo){
        printf("voce ganha acima do salario minimo");
    }else if(seuSalario == salarioMinimo){
        printf("voce ganha um salario minimo");
    }else{
        printf("Voce ganha abaixo do salario minimo");
    }
}

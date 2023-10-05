#include <stdio.h>

int main (){
    float cont = 1;
    float contSal = 0;
    float contFil = 0;
    float contSalAteCem = 0;
    float contMaiorSal = 0;
    float mediaSal, mediaFil, percentSal, salario, filhos;

    do{
        printf("Pesquisa numero: %.0f.\nInsira a quantidade de filhos:\n", cont);
        scanf("%f", &filhos);
        contFil+= filhos;
        printf("Insira o salario. (-1 para finalizar)\n");
        scanf("%f", &salario);
        if (salario >= 0 ){
            contSal+= salario;  
            cont++;

        }
        if (salario > contMaiorSal){
            contMaiorSal = salario;
            
        }
        if (salario < 100 && salario >= 0){
            contSalAteCem++;
        }

    } while (salario >= 0);
    cont--;
    contFil-= filhos;

    mediaFil = contFil / cont;

    mediaSal = contSal / cont;

    percentSal = (contSalAteCem / cont) * 100;
    printf("Pessoas entrevistadas: %.0f\n", cont);
    printf("Media do numero de filhos: %.2f\n", mediaFil);
    printf("Media do salario: %.2f\n", mediaSal);
    printf("Porcentagem de pessoas que ganham ate de R$100,00: %.2f por cento\n", percentSal);
    printf("Maior salario:%.2f", contMaiorSal);
    
}

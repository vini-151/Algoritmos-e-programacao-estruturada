#include <stdio.h>

char inserirSexo(char c1){
    printf("Insira o seu sexo. M / F\n");
    fflush(stdin);
    scanf("%c", &c1);    
    return c1;
}

double inserirSalario(double n1){
    printf("Insira o seu salario.\n");
    scanf("%lf", &n1);
    if (n1 > 1){
        return n1;    
    }else{
        printf("Valor inserido nao suportado.\n");
    }
}

double classificaSalario(double n1){
    if (n1 < 1400){
        n1 = 1; //codigo "1" = abaixo do salario minimo
        return n1;
    }else if(n1 == 1400){
        n1 = 2; // codigo "2" = igual ao salario minimo
        return n1;
    }else{
        n1 = 3; // codigo "3" acima do salario minimo
        return n1;
    }
}

void mostraClassifica(char sexo, double salario, int classificacaoDoSalario){
    if (sexo == 'm' || sexo == 'M'){
        printf("Sexo masculino.\n");
    }else if (sexo == 'f' || sexo == 'F'){
        printf("Sexo feminino.\n");
    }
    
    printf("Salario de R$%.2lf\n", salario);

    switch (classificacaoDoSalario){
    case 1:
        printf("Salario abaixo do salario minimo.\n");
        break;
    case 2: 
        printf("Salario equivalente ao salario minimo.\n");
        break;
    case 3:
        printf("Salario Acima do salario minimo.\n");
    default:
        break;
    }
    
}

int main(){
    int opcao = 1;
    char sexo;
    double salario; 
    double classificacaoSalario;
    int contAbaixo = 0;
    int contAcima = 0;

    do{
        sexo = inserirSexo(sexo);
        salario = inserirSalario(salario);
        classificacaoSalario = classificaSalario(salario);
        if (classificacaoSalario == 1){
            contAbaixo++;
        }else if (classificacaoSalario == 3){
            contAcima++;
        }
        mostraClassifica(sexo, salario, classificacaoSalario);
        printf("Digite 1 para continuar, digite 0 para finalizar: ");
        scanf("%d", &opcao);
    } while (opcao == 1);

    printf("Pesquisa encerrada.\n Assalariados com salario abaixo do salario minimo: %i.\n Assalariados com salario acimaa do salario minimo: %i.\n", contAbaixo, contAcima);
    
    return 0;

}
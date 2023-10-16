#include <stdio.h>
int mes(int n1){
    switch (n1){
        case 1:
            printf("Janeiro - 31 dias\n");
            break;
        case 2:
            printf("Fevereiro - 28/29 dias\n");
            break;
        case 3:
            printf("Marco - 31 dias\n");
            break;
        case 4:
            printf("Abril - 30 dias\n");
            break;
        case 5:
            printf("Maio - 31 dias\n");
            break;
        case 6:
            printf("Junho - 30 dias\n");
            break;
        case 7:
            printf("Julho - 31 dias\n");
            break;
        case 8:
            printf("Agosto - 31 dias\n");
            break;
        case 9:
            printf("Setembro - 30 dias\n");
            break;
        case 10:
            printf("Outubro - 31 dias\n");
            break;
        case 11:
            printf("Novembro - 30 dias\n");
            break;
        case 12:
            printf("Dezembro - 31 dias\n");
        default:
            printf("Nao ha um mes correspondente ao numero inserido\n");
            break;
        }
    }

int main(){
    int numMes;
    printf("Digite o numero\n");
    scanf("%i", &numMes);
    mes(numMes);

    return 0;

}
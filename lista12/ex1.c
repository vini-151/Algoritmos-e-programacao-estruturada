#include <stdio.h>

void aVista(double n1){
    printf("Valor a vista selecionado.\n");
    n1 = n1 - (n1 * 0.10);
    printf("Valor total: %.2lf a vista.", n1);
}

void duasVezes(double n1){
    printf("Parcelado em duas vezes selecionado.\n");
    n1 = n1 / 2;
    printf("2 parcelas de R$%.2lf. valor total: %.2lf", n1, n1*2);
}

void parcelado(double n1){
    int parcelas;
    printf("Parcelado de 3 - 10 parcelas selecionado. Insira a quantidade de parcelas:\n");
    scanf("%i", &parcelas);
    n1 = (n1 / parcelas) + (n1 * 0.03);
    printf("%i parcelas de R$%.2lf. valor total com juros de 3%% ao mes: %.2lf", parcelas, n1, n1 * parcelas);
}

int main(){
    double valorGasto;
    int opcao;
    printf("Insira o valor gasto\n");
    scanf("%lf", &valorGasto);
    printf("Insira a opcao de pagamento.\n 1 - A vista.\n 2 - Em Duas vezes.\n 3 - 3 ate 10 vezes (Acima de R$100,00.\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            aVista(valorGasto);
            break;
        case 2:
            duasVezes(valorGasto);
            break;
        case 3:
            if (valorGasto >= 100){
                parcelado(valorGasto);
            }else{
                printf("Valor abaixo do permitido para pagamento parcelado.\n");
            }
            break;
        default:
            printf("Valor isnerido não correspondente as opcoes.\n");
            break;
    }

    return 0;
}
#include <stdio.h>

int main (){
    int fruta, opcao, quantidade;
    int somatorio = 0;
    do
    {
        printf("Selecione a fruta: ABACAXI (1) - 5,00 a unidade 2 => MACA (2) - 1,00 a unidade 3 => PERA (3) - 4,00 a unidade\n");
        scanf("%i", &opcao);
        printf("Selecione a quantidade\n");
        scanf("%i", &quantidade);
        switch (opcao){
        case 1:
            printf("%i abacaxi selecionado(s)\n", quantidade);
            fruta = quantidade * 5;
            break;
        case 2:
            printf("%i maca selecionado(s)\n", quantidade);
            fruta = quantidade * 1;
            break;
        case 3:
            printf("%i pera selecionado(s)\n", quantidade);
            fruta = quantidade * 4;
            break;        
        default:
        printf("Codigo nao encontrado\n", quantidade);
            break;
        }

        somatorio += fruta;

        printf("Deseja continuar a operacao? 1-sim, 0-nao");
        scanf("%i", &opcao);
    } while (opcao == 1);

    printf("Total a pagar: %i", somatorio);
}
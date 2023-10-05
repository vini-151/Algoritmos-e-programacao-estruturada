#include <stdio.h>

int main (){
  int prato, sobremesa, bebida, calPrato, calSobremesa, calBebida, calTotal;
  printf("Escolha seu prato: 1 - vegetariano, 2 - Peixe, 3 - Frango, 4 - Carne.\n ");
  scanf("%i", &prato);
  switch (prato){
    case 1:
        printf("Vegetariano selecionado, 180 cal.\n");
        calPrato = 180;
        break;
    case 2:
        printf("Peixe selecionado, 230 cal.\n");
        calPrato = 230;
        break;
    case 3:
        printf("Frango selecionado, 250 cal.\n");
        calPrato = 250; 
        break;
    case 4:
        printf("Carne selecionado, 350 cal.\n");
        calPrato = 350;
        break;
    default:
        printf("Nenhum prato selecionado");
        calPrato = 0;
        break;
  }
  printf("Escolha sua sobremesa: 1 - Abacaxi, 2 - Sorvete diet, 3 - Mouse diet, 4 - Mouse chocolate.\n");
  scanf("%i", &sobremesa);
  switch (sobremesa){
    case 1:
        printf("Abacaxi selecionado, 76 cal.\n");
        calSobremesa = 75;
        break;
    case 2:
        printf("Sorvete Diet selecionado, 110 cal.\n");
        calSobremesa = 110;
        break;
    case 3:
        printf("Mouse Diet selecionado, 170 cal.\n");
        calSobremesa = 170;
        break;
    case 4:
        printf("Mouse de chocolate selecionado, 200 cal.\n");
        calSobremesa = 200;
        break;
    default:
        printf("Nenhuma sobremesa selecionada");
        calSobremesa = 0;
        break;
  }
  printf("Selecione sua bebida: 1 - Cha, 2 - Suco de laranja, 3 - Suco de melao, 4 - Refrigerante diet.\n");
  scanf("%i", &bebida);
  switch (bebida){
    case 1:
        printf("Cha selecionado, 20 cal.\n");
        calBebida = 20;
        break;
    case 2:
        printf("Suco de laranja selecionado, 70 cal.\n");
        calBebida = 70;
        break;
    case 3:
        printf("Suco melao, 100 cal.\n");
        calBebida = 100;
        break;
    case 4:
        printf("Refrigerante diet selecionado, 65 cal.\n");
        calBebida = 65;
        break;
  default:
        printf("Nenhuma bebida selecionada.\n");
        calBebida = 0;
        break;
  }
  calTotal = calBebida + calPrato + calSobremesa;
  printf("Calorias totais = %i", calTotal);
} 

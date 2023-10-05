#include <stdio.h>

int main (){
  int cod, quantidade; 
  double valorTotal;
  printf("Insira o codigo do produto\n");
  scanf("%i", &cod);
  switch(cod){
    case 100:
      printf("Cachorro quente selecionado, escreva quantidade\n");
      scanf("%i",&quantidade);
      valorTotal = 10.10 * quantidade;
      printf("O valor total e de: %.2lf", valorTotal);
      break;
    case 101:
      printf("Bauru simples selecionado, escreva a quantidade\n");
      scanf("%i", &quantidade);
      valorTotal = 8.30 * quantidade;
      printf("O valor total e de %.2lf", valorTotal);
      break;
    case 102:
      printf("Bauru com ovo selecionado, escreva a quantidade\n");
      scanf("%i", &quantidade);
      valorTotal = 8.50 * quantidade;
      printf("O valor total e de: %.2lf", valorTotal);
      break;
    case 103:
      printf("Hamburger selecionado, escrevva a quantidade\n");
      scanf("%i", &quantidade);
      valorTotal = 12.50 * quantidade;
      printf("O valor total e de: %.2lf", valorTotal);
      break;
    case 104:
      printf("Cheeseburger selecionado, escreva a quantidade\n");
      scanf("%i", &quantidade);
      valorTotal = 13.25 * quantidade;
      printf("O valor total e de: %.2lf", valorTotal);
    default:
    printf("Produto nao encontrado");
  }
}

#include <stdio.h>

int main (){
  int ddd;
  printf("Insira o ddd.\n");
  scanf("%i", &ddd);
  switch (ddd){
    case 61:
        printf("DDD de Brasilia.");
        break;
    case 71:
        printf("DDD salvador.");
        break;
    case 11:
        printf("DDD Sao Paulo.");
        break;
    case 21:
        printf("DDD Rio de Janeiro.");
        break;
    case 32:
        printf("DDD Juiz de Fora.");
        break;
    case 19:
        printf("DDD Campinas.");
        break;
    case 27:
        printf("DDD Vitoria.");
        break;
    case 31:
        printf("DDD Belo Horizonte.");
        break;
    default:
        printf("Cidade sem identificacao.");
  }
}

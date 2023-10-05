#include <stdio.h>

int main (){
  int x, y;

  printf("Insira os valores de x e y\n");
  scanf("%i", &x);
  scanf("%i", &y);

  if(x > 0 && y > 0){
    printf("Ponto no primeiro quadrante\n");
  }else if(x < 0 && y > 0){
    printf("Esta no segundo quadrante\n");
  }else if(x < 0 && y < 0){
    printf("Esta no terceiro quadrante\n");
  }else if(x > 0 && y < 0){
    printf("Esta no quarto quadrante\n");
  }else if (x == 0 && y >0){
    printf("Esta sobre o eixo y\n");
  }else if(y == 0 && x > 0 ){
    printf("Esta sobre o eixo x");
  }else{
    printf("Origem");
  }
}

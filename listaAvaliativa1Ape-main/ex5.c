#include <stdio.h>
#include <math.h>


int main (){
  float x1, x2, y1, y2, dist;

  printf("Insira os valores de x1, y1, x2 e y2\n");
  scanf("%f", &x1);
  scanf("%f", &y1);
  scanf("%f", &x2);
  scanf("%f", &y2);
  
  dist = sqrt(pow((x2 - x1),2) + pow((y2 - y1), 2));

  printf("%.4f", dist);
  
}

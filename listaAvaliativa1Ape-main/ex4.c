#include <stdio.h>

int main (){
    float a = 50;
    float b = 90;
    float c = 40;

    if (a + b + c == 180){
           if (a == 90 || b == 90 || c == 90){
        printf("Triagulo retangulo");
            }else if (a < 90 && b < 90 && c < 90){
        printf("Triangulo acutangulo");
        }else{
        printf("Triangulo obtusangulo");
        }  
    }else{
        printf("Nao e um triangulo\n");
    }
  
}

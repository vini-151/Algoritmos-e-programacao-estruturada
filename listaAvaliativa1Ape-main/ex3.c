#include <stdio.h>

int main (){

    float a = 3 ;
    float b = 4;
    float c = 5;

    if ((a + b > c && a + c > b && b + c > a)){
        if (a == b && a == c && b == c){
        printf("Triangulo equilatero");
        }else if ((a == b && a != c) || (a == c && a!= b) || (b == c && b != a)){
       printf("Triangulo isoceles") ;
        }else{
        printf("Triangulo escaleno");
        }   
    }else{
        printf("Nao e um triangulo");
    }
    
    
}

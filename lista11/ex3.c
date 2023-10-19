#include <stdio.h>
void temp(f){
    int c = (f - 32) * 5/9;
    printf("A temperatura inserida em Celsius e de %i\n", c);
}
int main(){
    int f;
    
     printf("Insira a temperatura em Fahrenheit\n");
     scanf("%i", &f);
     temp(f);
}
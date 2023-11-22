#include <stdio.h>

int main(){
    int num1;
    int num2;

    int *p1;
    int *p2;

    p1 = &num1;
    p2 = &num2;

    if (p1 > p2){
        printf("Endereco de p1 maior que p2");
    }else{
        printf("Endereco de p2 maior que p1");        
    }

    return 0;    

}
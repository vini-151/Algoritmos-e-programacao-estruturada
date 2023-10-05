#include <stdio.h>

int main (){
    int num;
    printf("Insira um numero:\n");
    scanf("%i", &num );
    while (num != 0)
    {
        printf("%i\n", num);
        num--;
    }
    
}   

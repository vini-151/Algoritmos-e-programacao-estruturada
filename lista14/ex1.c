#include <stdio.h>

int main(){
    int x;
    float y;
    char z;
    
    int *px;
    float *py;
    char *pz;

    px = &x;
    py = &y;
    pz = &z;

    *px = 10;
    *py = 5.8;
    *pz = 'a';

    printf("%i\n", *px);
    printf("%f\n", *py);
    printf("%c\n", *pz);

    return 0;
}
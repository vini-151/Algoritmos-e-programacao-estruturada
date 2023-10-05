#include <stdio.h>
#include <math.h>
int main(){
    float a[5], y[5];

    for (int i = 0; i < 5; i++){
        printf("Digite os numeros do vetor \"A\"\n");
        scanf("%f", &a[i]);
        y[i] = a[i] * a[i];
       // y[i] = pow(a[i],2);
    }
    for (int i = 0; i < 5; i++){
        printf("%.0f\n", y[i]);
    }
    return 0;
}
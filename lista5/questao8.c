#include <stdio.h>

int main (){
    int idade, tempoDeTrabalho;

    printf("Insira sua idade\n");
    scanf("%i", &idade);
    printf("Insira seu tempo de trabalho\n");
    scanf("%i", &tempoDeTrabalho);

    if(idade >= 65){
        printf("Voce pode aposentar");
    }else if (tempoDeTrabalho >= 30)
    {
        printf("Voce pode aposentar");
    }else if(idade >=60 && tempoDeTrabalho >= 25){
        printf("Voce pode aposentar");
    }else{
        printf("Voce nao pode aposentar");
    }
    
}

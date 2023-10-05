#include <stdio.h>

int main (){
  float n1, n2, n3, mp, mediaGeral;
  float somatoriaGeral = 0;
  int cont = 0;

  while(cont < 30){
    printf("Insira a nota 1:\n");
    scanf("%f", &n1);
    printf("Insira a nota 2:\n");
    scanf("%f", &n2);
    printf("Insira a nota 3:\n");
    scanf("%f", &n3);

    mp = (n1 * 3 + n2 * 4 + n3 * 3) / 10;
    cont++;
    printf("Media ponderada do aluno %i: %.2f\n", cont, mp);
    if(mp >= 7){
      printf("Aprovado\n");
    }else{
      printf("Reprovado\n");
    }
    somatoriaGeral+= mp;
    
  }
  mediaGeral = somatoriaGeral / 30;

  printf("Media geral: %.2f", mediaGeral);
  
}

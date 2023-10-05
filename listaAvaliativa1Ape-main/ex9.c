#include <stdio.h> 

int main (){
    int candA = 0;
    int candB = 0;
    int candC = 0;
    int candD = 0; 
    int branco = 0;
    int nulo = 0;
    int opcao;
    do{
        printf("Insira o numero do canditado. 1 - cand. A. 2 - cand B. 3 - cand. C. 4 - cand. D\n");
        scanf("%i", &opcao);
        if (opcao == 1){
            candA++;
        }else if (opcao == 2){
            candB++;
        }else if (opcao == 3){
            candC++;
        }else if (opcao == 4){
            candD++;
        }else if (opcao == 5){
           nulo++;
        }else if (opcao == 6){
            branco++;
        }else if(opcao == 0){
            printf("Finalizando operacao.\n");
        }else{
            printf("Erro, nenhum candidato registrado\n");
        }       
    } while (opcao != 0);

    printf("Canditado A - %i votos.\n", candA);
    printf("Candidato B - %i votos.\n", candB);
    printf("Candidato C - %i votos.\n", candC);
    printf("Candidato D - %i votos.\n", candD);
    printf("Votos nulos - %i\n", nulo);
    printf("Votos em branco - %i\n", branco);
    
}

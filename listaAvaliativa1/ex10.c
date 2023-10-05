#include <stdio.h>

int main(){
    char estado[3];
    int contVeiculos = 0;
    int contAcidentes = 0;
    int cont = 0;
    int maiorIndAcidentesCont = 0;
    int cidadeMaiorIndAcidentes = 0;
    int menorIndAcidentesCont = 0;
    int cidadeMenorIndAcidentes = 0;
    int contRs = 0;
    int contAcidentesRs = 0;
    int codigo, veiculos, acidentes;
    float mediaVeiculos, mediaAcidentesRs;

     printf("Insira o codigo da cidade.\n");
     scanf("%i", &codigo);
     fflush(stdin);
     printf("Digite o estado\n");
     fgets(estado, 3 ,stdin);
     fflush(stdin);
     printf("Insira o numero de veiculos\n");
     scanf("%i", &veiculos);
     contVeiculos+= veiculos;
     printf("Insira o numero de acidentes.\n");
     scanf("%i", &acidentes);
     contAcidentes+= acidentes;

    if ((estado[0] == 'R' && estado[1] == 'S') || (estado[0] == 'r' && estado[1] == 's')){
            
        contAcidentesRs+= acidentes;
        contRs++;
    }

     if (acidentes > maiorIndAcidentesCont){
         maiorIndAcidentesCont = acidentes;
         cidadeMaiorIndAcidentes = codigo;
    }

    menorIndAcidentesCont = acidentes;
    cidadeMenorIndAcidentes = codigo;
        cont++;
    do{
        printf("Insira o codigo da cidade.\n");
        scanf("%i", &codigo);
        fflush(stdin);
        printf("Digite o estado\n");
        fgets(estado, 3 ,stdin);
        fflush(stdin);
        printf("Insira o numero de veiculos\n");
        scanf("%i", &veiculos);
        contVeiculos+= veiculos;
        printf("Insira o numero de acidentes.\n");
        scanf("%i", &acidentes);
        contAcidentes+= acidentes;

        if (acidentes > maiorIndAcidentesCont){
            maiorIndAcidentesCont = acidentes;
            cidadeMaiorIndAcidentes = codigo;
        }

        if (acidentes < menorIndAcidentesCont)
        {
            menorIndAcidentesCont = acidentes;
            cidadeMenorIndAcidentes = codigo;
        }
        cont++;
        if ((estado[0] == 'R' && estado[1] == 'S') || (estado[0] == 'r' && estado[1] == 's'))
        {
            
            contAcidentesRs+= acidentes;
            contRs++;

        }
        

    } while (cont < 200);
    
    //médias

    mediaVeiculos = (float) contVeiculos / (float) cont;
    mediaAcidentesRs = (float) contAcidentesRs / (float) contRs;


    printf("Maior indice acidentes: %i. Pertence a cidade codigo: %i\n", maiorIndAcidentesCont, cidadeMaiorIndAcidentes);
    printf("Menor indice de acidentes: %i. Pertence a cidade codigo: %i ", menorIndAcidentesCont, cidadeMenorIndAcidentes);
    printf("Media de veiculos: %.2f\n", mediaVeiculos);
    printf("Media de acidentes entre as cidades do Rio Grande do Sul %.2f\n", mediaAcidentesRs);
    
}

#include <stdio.h>
#include <math.h>

int main (){
    char opiniao;
    float cont = 0;
    float contOtimo = 0;
    float contBom = 0;
    float contReg = 0;
    float contRuim = 0;
    float contIdadeRespRuim = 0;
    float mediaIdadeRespRuim;
    float maiorIdadeRespPessimo = 0;
    float maiorIdadeRespOtimo = 0;
    float maiorIdadeRespRuim = 0;
    float contPessimo = 0;
    float diferencaIdade;
    float percentPessimo;
    float idade;
    float difPercent;

    for (int i = 0; i < 100; i++){
        printf("Insira sua idade\n");
        scanf("%f", &idade);
        fflush(stdin);
        printf("Insira a sua opiniao em relacao ao filme. \n\tA - otimo\n\tB - Bom\n\tC - Regular\n\tD - Ruim\n\tE - Pessimo\n");
        fflush(stdin);
        scanf("%c", &opiniao);
        //coletando respostas "ótimo"
        if (opiniao == 'A' || opiniao == 'a'){
            contOtimo++;
            if (idade > maiorIdadeRespOtimo){
                maiorIdadeRespOtimo = idade;
            }
        }
        cont++;
        //coletando respostas "bom" e "regular"
        if(opiniao == 'B' || opiniao == 'b'){
            contBom++;
        }
        if(opiniao == 'C' || opiniao == 'c'){
            contReg++;
        }
        //coletando idade de quem respondeu "ruim"
        if (opiniao == 'D' || opiniao == 'd'){
            contIdadeRespRuim+= idade;
            contRuim++;
            if (idade > maiorIdadeRespRuim)
            {
                maiorIdadeRespRuim = idade;
            }
            
            
        }
        //coletando idade de quem respondeu pessimo e calculando a maior idade
        if (opiniao == 'E' || opiniao == 'e'){
            contPessimo++;
             //calculando menor idade de quem respondeu "pessimo"
            if (idade > maiorIdadeRespPessimo){
                maiorIdadeRespPessimo = idade;
            }
                        
        }     

    }
    //calculando diferença percentual
    if (contBom > contReg){
        difPercent = ((contBom - contReg) / contReg) * 100;
    }else if(contReg > contBom){
        difPercent = ((contReg - contBom) / contBom) * 100;
    }else if( contReg == contBom){
        difPercent = 0;
    }
    else{
        difPercent = 0;
    }
    //calculando a media de idade de quem respondeu "ruim"
    if (contRuim > 0)
    {
        mediaIdadeRespRuim = contIdadeRespRuim / contRuim;
    }else{
        mediaIdadeRespRuim = 0;
    }    
    //calculando media de quem respondeu "pessimo"
    percentPessimo = (contPessimo / cont) * 100;
    //calculando a diferença de idade entre a maior idade 
    if (maiorIdadeRespOtimo > maiorIdadeRespRuim){
        diferencaIdade = maiorIdadeRespOtimo - maiorIdadeRespRuim;
    }else if (maiorIdadeRespRuim > maiorIdadeRespOtimo){
        diferencaIdade = maiorIdadeRespRuim - maiorIdadeRespOtimo;
    }else{
        diferencaIdade = 0;
    }
    //imprimindo resultados
    printf("A quatidade de respostas \"Otimo\" e de: %.0f\n", contOtimo);
    printf("A diferenca percentual entre respostas \"bom\" e \"regular\" e de: %.2f\n", difPercent);
    printf("A media de idade das pessoas que responderam ruim e de: %.2f\n", mediaIdadeRespRuim);
    printf("A porcentagem de quem respondeu \"Pessimo\" e de: %.2f. E a maior idade de quem respondeu essa opcao e de: %.0f\n", percentPessimo, maiorIdadeRespPessimo);
    printf("A diferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim e de: %.0f ", diferencaIdade);   
    
    return 0;
}